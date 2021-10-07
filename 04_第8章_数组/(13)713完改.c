/*�� scanf() ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��졣 
�� 3 �� 5 ��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ��� 5 �켴����ĵڼ��죬��������������������·� �� 3 ʱ�迼�Ƕ��һ�졣
ע���ж�����Ƿ�Ϊ����ķ����� Ϊ 400 �ı���Ϊ���꣬�� 2000 �ꣻ���� 100 �ı��������� 4 �ı�����Ϊ���꣬�� 1996 ��*/

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
