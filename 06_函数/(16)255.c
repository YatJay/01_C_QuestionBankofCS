/*����Ĺ����ǣ��Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У��ٶ���һ���� num����Щ������ 0����
	Ȼ��ֱ�����Զ��庯�������� arrA �� arrB �в��Ҵ��� num ����С�����������ж�����ֵ�����������λ�õ��±ꡢ��������±ꡣ*/
	
#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int posMaxSmaller(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, minPosA, minPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	posMaxSmaller(arrA,5,num);//______________________________  /* userCode(<50�ַ�): ���ú���������arrA�д���num����С�����ڵ��±� */
	if (-1 == minPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nminPos(arrA) = %d", minPosA);
	}

	posMaxSmaller(arrB,8,num);//______________________________  /* userCode(<50�ַ�): ���ú���������arrB�д���num����С�����ڵ��±� */
	if (-1 == minPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nminPos(arrB) = %d\n", minPosB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int posMaxSmaller(int array[],int n,int num){
	int i,posMaxSmaller,maxSmaller,flag=0;
	for(i=0;i<n;i++){
		if(array[i]>num){
			flag=1;
			
		}
	}
	
	return posMaxSmaller;
}

