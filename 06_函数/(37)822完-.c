/*����Ĺ����ǣ����㲢��� n�� n �� 100�� �ſγ̵�ƽ���ɼ�*/

/*
>>>ע�������������ж�����������ļ�����ʽ��ʵ����-1�Ѿ����������У����Ǽ������鳤��ʱ����-1���볤�� 
>>>score[i]=-1ʱ����ѭ������ʱʵ�����鳤����0~i��i+1�����ݣ�����count=i�൱����0~i-1��i�����ݣ�-1����������
*/

#include <stdio.h>

#define maxNums 100

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
float avg(int array[],int count);

int main(void)
{
	int i, count, scores[maxNums];
	float avgScore;

	printf("Please input scores(-1 to exit): ");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &scores[i]);
		if (-1 == scores[i])
		{
			break;
		}
	}
	count = i;  //>>>ע�������������ж�����������ļ�����ʽ��ʵ����-1�Ѿ����������У����Ǽ������鳤��ʱ����-1���볤�� 
				//>>>score[i]=-1ʱ����ѭ������ʱʵ�����鳤����0~i��i+1�����ݣ�����count=i�൱����0~i-1��i�����ݣ�-1���������� 

	avgScore = avg(scores,count);//______________________________  /* userCode(<50�ַ�): ���ú�������ƽ���ɼ� */
	printf("\naverage score is %.2f.\n", avgScore);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
float avg(int array[],int count){
	int sum,i;
	float avg;
	for(i=0;i<count;i++){
		sum+=array[i];
	}
	avg=(float)sum/count;
	return avg;
}
