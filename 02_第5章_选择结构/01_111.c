/*
x（x 只考虑整数 int 且必须定义为 int， 但 F(x) 完全可能超过 int 的表示范围）通过键盘输入（输入前给出提示“Please input x:” ），然后计算并在屏幕上输出函数值。
F(x) =
        - 5x + 27 (x < 0)
        7909 (x = 0)
        2x - 1 (x > 0)
*/

/*

细节： 

本题答案中使用了double类型来应对题目中要求的扩展int类型(本人使用float类型)，这里强调一下double输入和输出的细节： 

结论：在c语言中，double类型的读入必须用"%lf"；输出必须用"%f"

解释：double和float的精度是不同的，故存储空间也是不同的，所以如果要读入double类型，必须要用%lf来读入，以免精度丢失。而输出，由于printf中并无对%lf的严格定义，故使用%lf不一定会出现正确结果。那使用%f输出又如何呢？由于c语言中的默认参数提升规则，%f输出的不论是float还是double都会被提升到双精度进行输出，并不会有精度丢失。

如果使用C++编译器，那么用%lf输出是正确结果，如果是g++编译器，则是会输出错误结果，所以尽量使用%f输出double类型。
*/
#include <stdio.h>
int main(void)
{
    int x;
	float res;
    printf("Please input x:");
    scanf("%d",&x);
    if(x<0){
    	res = -5*(float)x+27; 
	}
    if(x==0){
    	res = 7909;
	}
    else{
		res = 2*(float)x - 1;
	} 
    
    printf("F(%d) = %.0f",x,res);
    
    return 0;
}
