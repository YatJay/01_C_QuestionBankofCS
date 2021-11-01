/*在文本文件“Comp.txt”“CompA.txt”“CompB.txt” 里有需要计算结果的整数算式，
文件“Comp.txt”提供参加运算的第一个数，文件“CompA.txt” 提供进行运算的运算符（只有“加法（+）”或者“减法（-）”），
文件“CompB.txt” 提供参加运算的第二个数，每个数或运算符均占一行，组合起来成为一个算式，遇到无法组成一个完整算式时即结束运算。
这样的算式有多个（数量不确定）。计算这些算式的结果并在屏幕上显示*/

/*
注意：
scanf()  fscanf()的 %c 格式输入
	 //读完一个运算符以后，缓冲区的字符是换行符；
	//若不加\n,则下一轮读入的运算符就成了\n影响计算
	//添加\n以后，下一轮直接到下一行行初读取 
	如下程序实例：%c作为scanf()的格式占位符的注意事项 
	{
	    char ch1;
	    char ch2;
		printf("Please input a character: ");
		scanf("%c",&ch1);  //若此时输入后回车，则会将\n输入到缓冲区中，下一次scanf()直接读取缓冲区的内容，造成\n赋给了ch2 
		printf("%c\n",ch1);
		scanf("%c",&ch2);
		printf("%c\n",ch2);
	    
	    return 0;
	}
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fp1,*fp2,*fp3;
	int a,b,res,i;
	char op;
	
	fp1=fopen("Comp324.txt","r");
	fp2=fopen("Comp324A.txt","r");
	fp3=fopen("Comp324B.txt","r");
	
	if(fp1==NULL||fp2==NULL||fp3==NULL){
		printf("File open error.\n");
		exit(0);
	}
	
	i=0;
	while(!feof(fp1)&&!feof(fp2)&&!feof(fp3)){
		i++;
		if(fscanf(fp1,"%d",&a)==1
		//此处读取运算符需要加一个空格才可正常输出，原因不明 :
		//读完一个运算符以后，缓冲区的字符是换行符；
		//若不加\n,则下一轮读入的运算符就成了\n影响计算
		//添加\n以后，下一轮直接到下一行行初读取 
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
			}
		else{
			break;
		}
	}
	
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
} 
