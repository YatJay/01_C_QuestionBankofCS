/*����Ĺ����ǣ� �����ѧ����ÿ��ѧ�������ݰ���ѧ�š�������� 19 �ֽڣ��� ���ſεĳɼ���
�Ӽ����������ѧ�������ݣ�������ÿ��ѧ����ƽ���ɼ��������ʾ���ƽ���ֵ�ѧ������Ϣ������ѧ�ţ����������ſεĳɼ���ƽ����������
ע�� Ҫ���ýṹ���̣������������͵�ѡ��Ӧ�ʵ����ڱ�֤�������Ҫ�󾫶ȵ�����£����ɲ��˷��ڴ�ռ�ͼ���ʱ��ĺ�ϰ�ߡ�*/

#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
struct personalScore{
	int num;
	char name[20];
	float score1,score2,score3,score4,aver;
} myClass[5];

void setPersonalGrade(struct personalScore myClass[],int n);
int highScoreStudent(struct personalScore myClass[],int n);

/* User Code End(������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	setPersonalGrade(myClass,5);
	high = highScoreStudent(myClass,5);


	/* User Code End(������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
void setPersonalGrade(struct personalScore myClass[],int n){
	int i;
	printf("Please input srudent info : number name score1 score2 score3 score4\n");
	for(i=0;i<n;i++){
		printf("%d:",i+1);
		scanf("%d%s%f%f%f%f",&myClass[i].num,myClass[i].name,&myClass[i].score1,&myClass[i].score2,&myClass[i].score3,&myClass[i].score4);
		myClass[i].aver=(myClass[i].score1+myClass[i].score2+myClass[i].score3+myClass[i].score4)/4;
		printf("\n");
	}
}
int highScoreStudent(struct personalScore myClass[],int n){
	int high=0, i;
	for(i=1;i<5;i++){
		if(myClass[high].aver<myClass[i].aver){
			high=i;
		}
	}
	return high;
}


