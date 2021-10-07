/*从键盘输入年月日日期，计算出该日期是公元纪年以来的第几天。
注：判断年份是否为闰年的方法——为 400 的倍数为闰年，如 2000 年；若非 100 的倍数，而是 4 的倍数，为闰年，如 1996 年。*/

/*
细节：公元纪年的起点是公元1年，而没有“公元0年” ，因此计算前n-1年的天数之和，循环从i=1开始计数 
*/
#include <stdio.h>
int main(void)
{
    int year, month, day, i;
    int total[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    double sumyear = 0, summonth = 0, sum;
    printf("input a data(year-month-day):");
    scanf("%d-%d-%d", &year, &month, &day);
    for (i = 1; i < year; i++)
    {
        if (i % 400 == 0 || i % 100 != 0 && i % 4 == 0)
        {
            sumyear += 366;
        }
        else
        {
            sumyear += 365;
        }
    }
    for (i = 0; i < month; i++)
    {
        summonth += total[i];
    }
    if (year % 400 == 0 && month > 2 || year % 100 != 0 && year % 4 == 0 && month > 2)
    {
        summonth += 1;
    }
    sum = sumyear + summonth + day;
    printf("The result is %.0lf.\n", sum);
    return 0;
}
