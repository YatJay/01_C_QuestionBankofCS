#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
struct student
{
	int num;
	char name[20];
	float score1, score2, score3;
	float aver;
};

int cz(struct student x[]);


/* User Code End(������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	struct student  myClass[5];
	int i;

	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i = 0; i < 5; i ++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %f %f %f", &myClass[i].num, myClass[i].name, &myClass[i].score1, &myClass[i].score2, &myClass[i].score3);  //�˴�scanf()����ţ�� 
	}
	high = cz(myClass);

	/* User Code End(������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */



int cz(struct student x[])
{
	int i, maxi;
	float max;
	
	for (i=0; i<5; i++)
	{
		x[i].aver = (x[i].score1 + x[i].score2 + x[i].score3) / 3;
	}
	max = x[0].aver;
	maxi = 0;
	for (i=0; i<5; i++)
	{
		if (x[i].aver > max)
		{
			max = x[i].aver;
			maxi = i;
		}
	}
	return maxi;
}


