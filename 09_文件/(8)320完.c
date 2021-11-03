/*在文本文件“Comp.txt” 里有需要计算结果的整数算式，每个算式占一行且文件中只有一个算式，
	运算类型只有“加法（+）”或者“减法（-）”且运算符前后至少有一个空格。
	计算该算式的结果并在屏幕上显示。把程序运行时测试用的算式文件“Comp.txt” （见附件及文件内容）
 （加法示例，编程时还应考虑算式为减法的情况）保存到程序 P320.c 所在的文件夹且文件名保持不变*/
 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,res;
    char op;
    
    fp=fopen("Comp.txt","r");
    if(fp==NULL){
    	printf("File open error!");
    	exit(0);
	}
	
	fscanf(fp,"%d %c %d",&a,&op,&b);  //%c在输入字符数据时，若格式控制字符串中无非格式字符，则认为所有输入的字符均为有效字符。空格会被当作字符赋值给变量。
	switch(op){
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		default:
			break;
	}
    printf("\n%d %c %d = %d",a,op,b,res);
    fclose(fp);
    return 0;
}
