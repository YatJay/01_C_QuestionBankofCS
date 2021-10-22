/*����Ĺ����ǣ� �����ѧ����ÿ��ѧ�������ݰ���ѧ�š�������� 19 �ֽڣ������ſεĳɼ����Ӽ����������ѧ�������ݣ�
������ÿ��ѧ����ƽ���ɼ��������ʾ���ƽ���ֵ�ѧ������Ϣ������ѧ�ţ����������ſεĳɼ���ƽ����������*/

#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬���������ʹ�õ���������SCORE����������) */
typedef struct score{
	int num;
	char name[20];
	float score1,score2,score3,aver;
}SCORE;


/* User Code End(������Ӵ������) */

void Input(SCORE *pStu, int n);
int Highest(SCORE *pStu, int n);

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */
	SCORE myClass[5];

	/* �����ִ��빦�ܽ��飺������Ӧ�ĺ���������������ͳ�� */
	/* User Code Begin(Limit: lines<=2, lineLen<=50, �������ڱ��к���Ӵ��롢���2�С��г�<=50�ַ�) */
	Input(myClass,5);
	high=Highest(myClass,5);
	
	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* ����N��ѧ������Ϣ������ƽ���� */
void Input(SCORE *pStu, int n)
{
	int i;
	SCORE tmpStu;

	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i=0; i<n; i++)
	{
		printf("%d:", i+1);
		scanf("%d%s%f%f%f", &tmpStu.num, tmpStu.name,
			&tmpStu.score1, &tmpStu.score2, &tmpStu.score3);
		pStu[i] = tmpStu;
		pStu[i].aver = (pStu[i].score1 + pStu[i].score2 + pStu[i].score3) / 3.0f;
	}
}

/* �ҳ���ͨ������ֵ�������ƽ����ѧ������� */
int Highest(SCORE *pStu, int n)
{
	int i, pos = 0;

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	(pStu+pos)->aver=pStu->aver;
	for(i=0;i<n;i++){
		if((pStu+pos)->aver<(pStu+i)->aver){
			(pStu+pos)->aver=(pStu+i)->aver;
			pos=i;
		}
	}
	
	
	/* User Code End(������Ӵ������) */

	return pos;
}
