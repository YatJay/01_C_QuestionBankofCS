/*用 scanf() 输入某年某月某日，判断这一天是这一年的第几天。 
以 3 月 5 日为例，应该先把前两个月的加起来，然后再加上 5 天即本年的第几天，特殊情况，闰年且输入月份 ≥ 3 时需考虑多加一天。
注：判断年份是否为闰年的方法： 为 400 的倍数为闰年，如 2000 年；若非 100 的倍数，而是 4 的倍数，为闰年，如 1996 年*/

#include <stdio.h>
int main(void)
{
	int year, month, day, sum = 0;
	printf("Please input year-month-day: ");
	scanf("%d-%d-%d", &year, &month, &day);
	switch (month - 1)
	{
	case 11:
		sum += 30;
	case 10:
		sum += 31;
	case 9:
		sum += 30;
	case 8:
		sum += 31;
	case 7:
		sum += 31;
	case 6:
		sum += 30;
	case 5:
		sum += 31;
	case 4:
		sum += 30;
	case 3:
		sum += 31;
	case 2:
		sum += 28;
	case 1:
		sum += 31;
	default:;
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		if (month >= 3)
		{
			sum += day + 1;
		}
		else
		{
			sum += day;
		}
	}
	else
	{
		sum += day;
	}
	printf("\nIt is the %dth day.\n", sum);
	return 0;
}
