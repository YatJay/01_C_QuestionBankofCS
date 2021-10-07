/*从键盘读入 4 个数 num1、 num2、 num3、 num4，输出： (num1 ÷ num2的余数) × num3 + num4，不需考
虑 num2为 0 和计算结果溢出的情况。要求输出的结果中，整数部分宽度为 8（不足 8 时以 0 补足） ， 小数
部分宽度为 7。*/

/*
分析：根据题目要求
输出结果含有整数部分和小数部分，所以声明变量时result必为double；
存在取余运算，取余的两个变量必须是int类型；
运算表达式的结果必须是double类型才能赋给result，所以运算表达式中必须有double类型的变量才能使得计算时结果同步取double类型

注意：
%f占位符格式输出输出的细节问题：  https://zhuanlan.zhihu.com/p/206738818
    f 格式，用来输出小数。
    %f：整数部分全部输出，并输出6位小数；
    %.nf：整数部分全部输出，并输出n位小数；
    %m.nf：输出共占m列，n位小数，若数值宽度小于m则左端补空格。

*/
#include <stdio.h>
int main(void)
{
    int num1, num2, num4;
    double num3, result; //根据题意，运算结果必为double，则可知运算中某一参与运算变量的类型也要是double这样计算时合并类型向double靠拢

    printf("请输入4个数：");
    scanf("%d%d%lf%d", &num1, &num2, &num3, &num4);
    result = (num1 % num2) * num3 + num4;
    printf("\n计算结果为：%016.7f\n", result);  
    //此处出现%0.16.7f其含义是：f表示输出float型变量，.7表示输出结果精度(即小数部分宽度)，16表示整数部分+小数部分+小数点共16个字符宽度
    //0表示宽度不足时以0补足，默认是以空格补足

    return 0;
}