/*输入一个华氏温度，要求输出摄氏温度，计算公式为 C = 5 (F - 32)/9*/
/*
分析：
根据题意：确定要用float变量来存输入值和输出值

注意：
区别float和double
对编程人员来说，double 和float 的区别是double精度高，有效数字16位，float精度7位。 
但double消耗内存是float的两倍，double的运算速度比float慢得多，
C语言中数学函数名称double 和float不同，不要写错，能用单精度时不要用双精度（以省内存，加快运算速度）。
*/

#include <stdio.h>
int main(void)
{
    float F0, C0;
    printf("Input the degree: ");
    scanf("%f", &F0);
    C0 = 5 * (F0 - 32) / 9;
    printf("\nF(%.2f)=C(%.2f)\n", F0, C0);

    return 0;
}