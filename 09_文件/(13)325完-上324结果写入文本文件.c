/*在文本文件“Comp.txt”“CompA.txt”“CompB.txt” 里有需要计算结果的整数算式，文件“Comp.txt”提供参加运算的第一个数，文件“CompA.txt” 
	提供进行运算的运算符（只有“加法（+）”或者“减法（-）”），文件“CompB.txt” 提供参加运算的第二个数，
	每个数或运算符均占一行，组合起来成为一个算式，遇到无法组成一个完整算式时即结束运算。这样的算式有多个（数量不确定）。 
	计算这些算式的结果并将结果以文本文件格式保存到程序 P325.c 所在的文件夹中且文件名命名为“CompC.txt” 。*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fp1,*fp2,*fp3,*fpres;
	int a,b,res,i;
	char op;
	
	fp1=fopen("Comp325.txt","r");
	fp2=fopen("Comp325A.txt","r");
	fp3=fopen("Comp325B.txt","r");
	fpres=fopen("CompC325.txt","w");  //要写入的文件打开方式设置为"w" 
	
	if(fp1==NULL||fp2==NULL||fp3==NULL||fpres==NULL){
		printf("File open error.\n");
		exit(0);
	}
	
	i=0;
	while(!feof(fp1)&&!feof(fp2)&&!feof(fp3)){
		i++;
		if(fscanf(fp1,"%d",&a)==1
			&&fscanf(fp2,"%c\n",&op)==1  //注意注意 
			&&fscanf(fp3,"%d",&b)==1){
				switch(op){
					case '+':
						res=a+b;
						break;
					case '-':
						res=a-b;
						break;
					default:
						printf("Error.\n");
						break;
				}
				printf("L00%d : %d %c %d = %d\n",i,a,op,b,res);
				fprintf(fpres,"L00%d : %d %c %d = %d\n",i,a,op,b,res);
			}
		else{
			break;
		}
	}
	
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fpres);
	return 0;
} 
