/*在文本文件“Comp.txt” 里有需要计算结果的整数算式，
	每个算式占一行且文件中有多个（数量不确定）算式，运算类型只有“加法（+）”或者“减法（-）”且运算符前后至少有一个空格。 
	计算这些算式的结果并在屏幕上显示。*/

/*
只要求在屏幕上显示，并不要求将结果输出到源文件当中 
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,res,i=1;
    char op;
    
    fp=fopen("Comp321.txt","a+");
    if(fp==NULL){
    	printf("File open error!");
    	exit(0);
	}
	while(!feof(fp)){
		if(fscanf(fp,"%d %c %d",&a,&op,&b)==3){
			switch(op){
			case '+':
				res=a+b;
				break;
			case '-':
				res=a-b;
				break;
			default:
				printf("\nInput error!");
				break;
			}
			printf("\nL00%d:%d %c %d = %d",i,a,op,b,res);
			i++;
		}
		
	}
	
    
    fclose(fp);
    return 0;
}
