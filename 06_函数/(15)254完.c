/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� �ٶ���һ���� num��
	Ȼ��ֱ�����Զ��庯����������в���С��num���������������ҽ������*/

#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int maxSmallerArray(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, maxA, maxB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	maxA=maxSmallerArray(arrA,5,num);//______________________________  /* userCode(<50�ַ�): ���ú���������arrA��С��num������� */
	if (-1 == maxA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMax(arrA) = %d", maxA);
	}

	maxB=maxSmallerArray(arrB,8,num);//______________________________  /* userCode(<50�ַ�): ���ú���������arrB��С��num������� */
	if (-1 == maxB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMax(arrB) = %d\n", maxB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int maxSmallerArray(int array[],int n,int num){
	int smaller[n],maxSmaller;
	int countSmaller=0,i,j,flag=0;
	for(i=0,j=0;i<n;i++){
		if(array[i]<num){
			flag=1;
			smaller[j]=array[i];
			j++;
			countSmaller++;
		}
	}
	
	if(flag==1){
		maxSmaller=smaller[0];
		for(i=1;i<countSmaller;i++){
			if(maxSmaller<smaller[i]){
				maxSmaller=smaller[i];
			}
		}
	}
	else if(flag==0){
		maxSmaller=-1;
	}
	
	return maxSmaller;
}


