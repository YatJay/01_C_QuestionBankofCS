/*�Ӽ����������������ڣ�������������ǹ�Ԫ���������ĵڼ��졣
ע���ж�����Ƿ�Ϊ����ķ�������Ϊ 400 �ı���Ϊ���꣬�� 2000 �ꣻ���� 100 �ı��������� 4 �ı�����Ϊ���꣬�� 1996 �ꡣ*/

/*
ϸ�ڣ���Ԫ���������ǹ�Ԫ1�꣬��û�С���Ԫ0�ꡱ ����˼���ǰn-1�������֮�ͣ�ѭ����i=1��ʼ���� 
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
