/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� Ȼ��ֱ�����Զ��庯�������� arrA �� arrB �в��Ҵ�����ƽ��ֵ��Ԫ�ظ�����������ҽ����*/

#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int countBiggerAvg(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], countA, countB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	countA=countBiggerAvg(arrA,5);//______________________________  /* userCode(<50�ַ�): ���ú�������arrA�д�����ƽ��ֵ��Ԫ�ظ��� */
	printf("\nCount(arrA) = %d", countA);
	countB=countBiggerAvg(arrB,8);//______________________________  /* userCode(<50�ַ�): ���ú�������arrB�д�����ƽ��ֵ��Ԫ�ظ��� */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int countBiggerAvg(int array[],int n){
	int count=0,sum=0,i;
	float avg;
	for(i=0;i<n;i++){
		sum+=array[i];
	}
	avg=(float)sum/n;
	
	for(i=0;i<n;i++){
		if(array[i]>avg){
			count++;
		}
	}
	
	return count;
}

