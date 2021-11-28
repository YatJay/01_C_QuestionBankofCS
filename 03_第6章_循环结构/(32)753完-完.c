/*计算 x 的 y 次方，其中 y 为整数（可以是负整数或 0）， x 为实型。
注： 程序中不能使用库函数 pow() 或使用同名的变量、函数、单词。*/
#include <stdio.h>
int main(void)
{
	double x,r=1.0;
    int y,i;
    printf("Please input x & y: ");
    scanf("%lf %d",&x,&y);
    //需要对指数部分>=0和<0分类讨论 
    if(y<0){
    	for(i=1;i<=(0-y);i++){
    		r=r*x;
		}
		r=1/r;  //不要在循环内取倒数，循环内只计算乘积，出循环再计算倒数 
	}
	else if(y>=0){
		for(i=1;i<=y;i++){
			r=r*x;
		}
	}
	printf("%f^%d=%f",x,y,r);
    return 0;
}
