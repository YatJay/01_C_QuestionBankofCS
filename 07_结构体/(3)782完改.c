/*����Ĺ����ǣ� �����ѧ����ÿ��ѧ�������ݰ���ѧ�š�������� 19 �ֽڣ��� ���ſεĳɼ���
�Ӽ����������ѧ�������ݣ�������ÿ��ѧ����ƽ���ɼ��������ʾ���ƽ���ֵ�ѧ������Ϣ������ѧ�ţ����������ſεĳɼ���ƽ����������
ע�� Ҫ���ýṹ���̣������������͵�ѡ��Ӧ�ʵ����ڱ�֤�������Ҫ�󾫶ȵ�����£����ɲ��˷��ڴ�ռ�ͼ���ʱ��ĺ�ϰ�ߡ�*/

#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
struct student
{
	int num;
	char name[20];
	float score1, score2, score3, score4, aver;
};
int GetMax(struct student myClass[], int n);

/* User Code End(������Ӵ������) */

int main(void) {

int high; /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
struct student myClass[5];
int i;
printf("Please input students info:Num Name score1 score2 score3 score4\n");
for (i = 0; i < 5; i++)
{
	printf("%d:", i + 1);
	scanf("%d%s%f%f%f%f", &myClass[i].num, myClass[i].name,
		  &myClass[i].score1, &myClass[i].score2, &myClass[i].score3, &myClass[i].score4);
	myClass[i].aver = (myClass[i].score1 + myClass[i].score2 + myClass[i].score3 +
					   myClass[i].score4) /
					  4;
}
high = GetMax(myClass, 5);

/* User Code End(������Ӵ������) */

printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
	   myClass[high].name, myClass[high].num,
	   myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
int GetMax(struct student myClass[], int n)
{
	int i, high = 0;
	float max = myClass[0].aver;
	for (i = 1; i < n; i++)
	{
		if (myClass[i].aver > max)
		{
			max = myClass[i].aver;
			high = i;
		}
	}
	return high;
}
