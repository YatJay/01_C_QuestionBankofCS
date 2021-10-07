/*输入一个三位正整数，然后逆序输出。如输入 123，则输出 321。*/

/*
本程序提供了取一个数字的各个数位上数字的一般方法：
以一个三位数为例：
该三位数对10取余得到个位数字；
该三位数对100取余得到百位数字；
该三位数先除10再对10取余得到十位数字。
*/
#include <stdio.h>
int main(void)
{
    int num, bai, shi, ge;
    printf("Input an integer: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999)  //限制输入范围为三位数
    {
        ge = num % 10;   //三位数对10取余得到个位数字
        shi = num / 10 % 10;  //三位数除10抹去个位数字，再对10取余得到原数字的十位数字
        bai = num / 100;  //三位数对100取余得到百位数字
        printf("\nThe result is %d%d%d\n", ge, shi, bai);
    }
    else
    {
        printf("Invalid value\n");
    }
    return 0;
}