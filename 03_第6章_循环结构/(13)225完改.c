/*从键盘读入一个整数 Num，按从小到大的顺序依次输出所有满足条件的 3 位数：该数各位数字的立方和等于 Num。*/
/*
注意：设置标志位flag，循环结束后再通过flag判断没有找到的情况 
*/
#include <stdio.h>
int main(void)
{
    int num1, num2, ge, shi, bai, i, flag = 0;
    printf("Please Input a number: ");
    scanf("%d", &num1);
    printf("\nResult: ");
    for (i = 100; i < 1000; i++)
    {
        ge = i % 10;
        shi = i / 10 % 10;
        bai = i / 100;
        num2 = bai * bai * bai + shi * shi * shi + ge * ge * ge;
        if (num1 == num2)
        {
            printf("%5d", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("not Find!");
    }
    putchar('\n');
    return 0;
}
