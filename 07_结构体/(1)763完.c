/*����Ĺ����ǣ� �����ѧ����ÿ��ѧ�������ݰ���ѧ�š�������� 19 �ֽڣ������ſεĳɼ���
	�Ӽ����������ѧ�������ݣ�������ÿ��ѧ����ƽ���ɼ��������ʾ���ƽ���ֵ�ѧ������Ϣ������ѧ�ţ����������ſεĳɼ���ƽ����������
ע�� Ҫ���ýṹ���̣������������͵�ѡ��Ӧ�ʵ����ڱ�֤�������Ҫ�󾫶ȵ�����£����ɲ��˷��ڴ�ռ�ͼ���ʱ��ĺ�ϰ�ߡ�*/

/*
1.�ṹ��������������������� 
2.gets()������ִ��/������������������� 
	֮ǰʹ��scanf��ʱ�򣬻�����һ����\n���ڻ��������ˣ�gets()������س���Ϊ���������롣Ӧ��gets����֮ǰʹ�ã�fflush(stdin)�����Ĭ�ϻ�����
	��ʹ��stdin�������Լ������gets(a)���������a)
3.����ṹ�屾�����Ƕ�����һ���µ��������ͣ������������͵�ʹ�÷�ʽ��һ���������Ͳ�ͬ��
4.��ʼ������ʱ������Ķ��汾(��)������ʱֻ����scanf()��ȸ��Ӽ�� 
*/

#include <stdio.h>
#include <string.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */

//>>>�ṹ������Ķ�����������֮�⣻ 


struct myClass{
		int num;
		char name[20];
		float score1,score2,score3,aver;
	};
void inputMyClass(struct myClass myClass[5]);
void avgScore(struct myClass myClass[5]);
int getHighAvg(struct myClass myClass[5]);


/* User Code End(������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	struct myClass myClass[5];
	
	inputMyClass(myClass);
	avgScore(myClass);
	high = getHighAvg(myClass);
	
	

	/* User Code End(������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
void inputMyClass(struct myClass myClass[5]){
	int i;
	for(i=0;i<5;i++){
		printf("For student %d",i+1);
		printf("\nPlease input the number: ");
		scanf("%d",&myClass[i].num);
		
		fflush(stdin);
		
		printf("\nPlease input the name: ");
		gets(myClass[i].name);
		printf("\nPlease input the score1,score2,score3:");
		scanf("%f%f%f",&myClass[i].score1,&myClass[i].score2,&myClass[i].score3);
	}
	printf("Input over!");
}

void avgScore(struct myClass myClass[5]){
	int i;
	for(i=0;i<5;i++){
		myClass[i].aver=(myClass[i].score1+myClass[i].score2+myClass[i].score3)/3;
	}
}

int getHighAvg(struct myClass myClass[5]){
	int high = 0,i;
	for(i=1;i<5;i++){
		if(myClass[high].aver<myClass[i].aver){
			high=i;
		}
	}
	return high;
}


