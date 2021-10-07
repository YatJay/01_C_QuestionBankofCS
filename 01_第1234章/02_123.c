/*从键盘读入 4 个数 num1、 num2、 num3、 num4，输出： num1+ (num2 ÷ num3的余数) × num4，不需考
虑 num3为 0 和计算结果溢出的情况。要求输出的结果中，整数部分宽度为 7（不足 7 时以 0 补足） ， 小数
部分宽度为 5*/

/*
分析：
根据题目要求
输出结果含有整数部分和小数部分，所以声明变量时result必为double；
存在取余运算，取余的两个变量必须是int类型；
运算表达式的结果必须是double类型才能赋给result，所以运算表达式中必须有double类型的变量才能使得计算时结果同步取double类型

注意：
printf()格式输出相关细节在122.c中声明
*/
#include <stdio.h>
int main(void)
{
    int num1, num2, num3;
    double num4, result;

    printf("请输入4个数： ");
    scanf("%d%d%d%lf", &num1, &num2, &num3, &num4);
    result = num1 + (num2 % num3) * num4;
    printf("\n计算结果为： %013.5f\n", result);

    return 0;
}