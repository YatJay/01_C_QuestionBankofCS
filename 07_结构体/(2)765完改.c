#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
typedef struct student
{
	int num;
	char name[20];
	int math, english, computer;
	float average;
} STUDENT;

void input(STUDENT *pp, int n);
void chuli(STUDENT *pp, int n);

/* User Code End(������Ӵ������) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	input(myclass, 5);
	chuli(myclass, 5);
	/* User Code End(������Ӵ������) */
	
	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i=0; i<N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu+i)->num, (pStu+i)->name,
			(pStu+i)->math, (pStu+i)->english, (pStu+i)->computer, (pStu+i)->average);
	}

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */


void input(STUDENT *pp, int n)
{
	int i;
	
	printf("Please input info of students:No Name Math English Computer\n");
	for (i = 0; i < n; i ++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %d %d %d", &(pp + i) -> num, (pp + i) -> name,
			&(pp + i) -> math, &(pp + i) -> english, &(pp + i) -> computer);

		pp[i].average = (pp[i].math + pp[i].english + pp[i].computer) / 3.0f;
	}
}

void chuli(STUDENT *pp, int n)
{
	int i, j;
	STUDENT zj;
	
	for (i = 0; i < n - 1; i ++)
	{
		for (j = i + 1; j < n; j ++)
		{
			if (pp[i].average < pp[j].average)
			{
				zj = pp[i];
				pp[i] = pp[j];
				pp[j] = zj;
			}
		}
	}
}

