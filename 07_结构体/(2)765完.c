/*����Ĺ����ǣ� �����ѧ����ÿ��ѧ�������ݰ���ѧ�š�������� 19 �ֽڣ������ſεĳɼ����Ӽ����������ѧ�������ݣ�����ÿ��ѧ����ƽ���ɼ�����ƽ���ɼ��ɸߵ������򣬲�����������ʾ��
	ע�� Ҫ���ýṹ���̣������������͵�ѡ��Ӧ�ʵ����ڱ�֤�������Ҫ�󾫶ȵ�����£����ɲ��˷��ڴ�ռ�ͼ���ʱ��ĺ�ϰ�ߡ�*/

/*
1.������֪��������� STUDENT myclass[5]��֪������ʹ����typedef����ṹ������ı�����������ṹ���������ʹ�� struct �ṹ�������� �ṹ�������  ��������ʽ
2.�ο�������֪���벿���Լ��𰸣���Խṹ��������б���ʱʹ�� �ṹ�������׵�ַ+i ����ʽ���б��� 
3.�ο�������֪���벿���Լ��𰸣���Խṹ��������б���ʱʹ�� �ṹ�������׵�ַ+i ����ʽ���б��� �Լ� ���������� 
*/

#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
typedef struct student{
	int num;
	char name[20];
	int  math,english,computer; //�ο������ͼ�Լ���֪�����֪��Ҫ����Ϊint��ʽ 
	float average;
} STUDENT;
void input(STUDENT myclass[],int N);
void sort(STUDENT myclass[],int N);


/* User Code End(������Ӵ������) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	
	input(myclass,N);
	sort(myclass,N);
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
void input(STUDENT myclass[],int N){
	int i;
	printf(" Num Name Math English Computer\n");
	for(i=0;i<N;i++){
		printf("%d: ",i+1);
		scanf("%d %s %d %d %d",&myclass[i].num,myclass[i].name,&myclass[i].math,&myclass[i].english,&myclass[i].computer);
		myclass[i].average=(float)(myclass[i].math+myclass[i].english+myclass[i].computer)/3.0;
		//������ʽ�����int���ͣ���Ҫ��(float)ǿ������ת�����߽����в�����������ָ�Ϊ������ 
	}
}
void sort(STUDENT myclass[],int N){
	STUDENT temp;
	int i,j;
	for(i=1;i<=N-1;i++){
		for(j=0;j<=N-i-1;j++){
			if(myclass[j].average<myclass[j+1].average){
				temp=myclass[j];
				myclass[j]=myclass[j+1];
				myclass[j+1]=temp;
			}
		}
	}
}


