/*编写一个简单计算器程序，输入格式为： data1 op data2。
其中 data1 和 data2 是参加运算的两个数（data1、 data2， 必须定义为 int，但二者相加或相乘可能超出 int 能表示的范围）， 
op 为运算符，它的取值只能是“+”“-”“*”“/”“%” 。*/

/*
printf()输出%符号时要用%%否则认为%是占位符 
*/
#include <stdio.h>
int main(void)
{
    int data1,data2,cha,yu;
    long he,ji;
    float shang;
    char op;
	printf("Please input data1 opetation data2\n");
	scanf("%d %c %d",&data1,&op,&data2);
	switch(op){
		case '+':
			he = data1+data2;
			printf("%d + %d =%ld",data2,data2,he);
			break;
		case '-':
			cha = data1-data2;
			printf("%d - %d = %d",data2,data2,cha);
			break;
		case '*':
			ji = data1*data2;
			printf("%d * %d = %ld",data2,data2,ji);
			break;
		case '/':
			if(data2!=0){
				shang = (float)data1/data2;
				printf("%d / %d = %.2f",data2,data2,shang);
			}
			else printf("Error,chu shu wei 0\n");
			break;
		case '%':
			if(data2!=0){
				yu = data1%data2;
				printf("%d %% %d = %d",data2,data2,yu);
			}
			else printf("Error,chu shu wei 0\n");
			break;
		default:
			printf("Invalid input\n");
	}
    return 0;
}
