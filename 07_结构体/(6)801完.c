/*����Ĺ����ǣ� �����ѧ����ÿ��ѧ�������ݰ���ѧ�š�������� 19 �ֽڣ������ſεĳɼ���
�Ӽ����������ѧ�������ݣ�������ÿ��ѧ����ƽ���ɼ��������ʾ���ƽ���ֵ�ѧ������Ϣ������ѧ�ţ����������ſεĳɼ���ƽ����������*/

#include <stdio.h>

struct student
{
	int  num;
	char name[20];
	float score1, score2, score3;
	float aver;
};

void Input(struct student *pStu, int n);
int Highest(struct student *pStu, int n);

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */
	struct student myClass[5];

	/* �����ִ��빦�ܽ��飺������Ӧ�ĺ���������������ͳ�� */
	/* User Code Begin(Limit: lines<=2, lineLen<=50, �������ڱ��к���Ӵ��롢���2�С��г�<=50�ַ�) */
	Input(myClass,5);
	high = Highest(myClass,5);

	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* ����N��ѧ������Ϣ������ƽ���� */
void Input(struct student *pStu, int n)
{
	int i;

	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i=0; i<n; i++)
	{
		printf("%d:", i+1);
		scanf("%d%s %f%f%f",&(pStu+i)->num,(pStu+i)->name,&(pStu+i)->score1,&(pStu+i)->score2,&(pStu+i)->score3);
		(pStu+i)->aver=((pStu+i)->score1+(pStu+i)->score2+(pStu+i)->score3)/3.0;
	}
}

/* �ҳ���ͨ������ֵ�������ƽ����ѧ������� */
int Highest(struct student *pStu, int n)
{
	int i, high = 0;

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	for(i=1;i<n;i++){
		if((pStu+high)->aver<(pStu+i)->aver){
			(pStu+high)->aver=(pStu+i)->aver;
			high=i;
		}
	}
	return high;
}
	/* User Code End(������Ӵ������) */

	
