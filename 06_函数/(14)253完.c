/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� �ٶ���һ���� num����Щ������ 0����
	Ȼ��ֱ�����Զ��庯�������� arrA �� arrB �в��Ҵ��� num ����С����������ҽ����*/
	
#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int minBiggerArray(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, minA, minB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	minA=minBiggerArray(arrA,5,num);//______________________________  /* userCode(<50�ַ�): ���ú���������arrA�д���num����С�� */
	if (-1 == minA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMin(arrA) = %d", minA);
	}

	minB=minBiggerArray(arrB,8,num);//______________________________  /* userCode(<50�ַ�): ���ú���������arrB�д���num����С�� */
	if (-1 == minB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMin(arrB) = %d\n", minB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int minBiggerArray(int array[],int n,int num){
	int bigger[n],minBigger;
	int countBigger=0,i,j,flag=0;
	for(i=0,j=0;i<n;i++){
		if(array[i]>num){
			flag=1;
			bigger[j]=array[i];
			j++;
			countBigger++;
		}
	}
	
	if(flag==1){
		minBigger=bigger[0];
		for(i=1;i<countBigger;i++){
			if(minBigger>bigger[i]){
				minBigger=bigger[i];
			}
		}
	}
	else if(flag==0){
		minBigger=-1;
	}
	
	return minBigger;
}




