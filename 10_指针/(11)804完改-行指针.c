/*����Ĺ����ǣ� 
�ȴӼ��̶���� 8 ��ѧ���� 6 �ſγɼ�����ڶ�ά���� student �У�ÿһ�д洢һ��ѧ�������ݣ��� 0 ��Ϊѧ�ţ��� 1 ~ 6 ������Ϊ 6 �ſεĳɼ�����
�ٴӼ��̶���һ��ѧ�ţ��� student ���Ҹ�ѧ���Ƿ���ڣ������ڣ��������ƽ���ɼ����������ڣ�����ʾ��not Find!����*/

/*
��ά������ָ��
	0.char (*p)[80] ����һ����ָ����� 
	1.p+i����ָ�룬��ָ�����һ��������Ԫ�أ���������1��ָ����һ�м�����n��Ԫ��
	2.����*(p+i)��ȡ���е����ݣ�ʹ��ʱ�����壬���� *(p+i) �ڱ��ʽ��ָ���е���Ԫ�أ��Ӷ� *(p+i)+j����ָ����һ�еĸ���Ԫ�أ�*(*(p+i)+j) ���ʱ��еĸ���Ԫ��
	3.*(p+1) �ڶ���ʱ���ߺ� sizeof��& һ��ʹ��ʱ�ű�ʾ��������
*/
#include<stdio.h>

#define NOT_FIND -1
#define TOTAL_STU 8

/* ����aver�Ĺ���Ϊ����ѧ��ΪstuNo��ѧ����6�ſογ�֮ƽ���ɼ�����ͨ������ֵ����
		��δ�ҵ�ѧ��stuNo���򷵻�NOT_FIND */	
float aver(int (*pStu)[7],int stuNo);

int main(void)
{
	int student[TOTAL_STU][7]; /* the first column save student's number */
	float averScore;
	int i,j,stuNumber;

	printf("Input the %d student's number and score: \n", TOTAL_STU);
	/* �����ִ��빦�ܽ��飺�Ӽ��̶����8��ѧ����6�ſγɼ�����ڶ�ά����student�� */	
	/* User Code Begin(Limit: lines<=6, lineLen<=50, �������ڱ��к���Ӵ��롢���6�С��г�<=50�ַ�) */
	for(i=0;i<TOTAL_STU;i++){
		for(j=0;j<7;j++){
			scanf("%d",&student[i][j]);
		}
		printf("\n");
	}
	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nInput a student's number to compute: ");
	scanf("%d", &stuNumber);

	/* �����ִ��빦�ܽ��飺���ú���aver()��ƽ��ֵ */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к���Ӵ��롢���1�С��г�<=50�ַ�) */
	averScore=aver(student,stuNumber);
	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
	if (NOT_FIND == averScore)
	{
		printf("\nstudent of No.%d not Find!\n", stuNumber);
	}
	else
	{
		printf("\nThe No.%d student's average is %.2f\n", stuNumber, averScore);
	}

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯��aver����������) */
float aver(int (*pStu)[7],int stuNo){
	float aver;
	int i,j,sum=0,flag=0;
	for(i=0;i<TOTAL_STU;i++){
		if(*(*(pStu+i)+j)==stuNo){
			flag=1;
			for(j=1;j<7;j++){
				sum+=*(*(pStu+i)+j); //�˴��Ķ���ֻʹ����ָ�����������ʣ�ע������ * 
			}
			aver=sum/6.0;
		}
	}
	if(flag==0){
		aver=-1;
	}
	return aver;
}
