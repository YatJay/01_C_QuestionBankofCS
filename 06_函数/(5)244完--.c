/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� 
	�ٶ���һ�������ҵ��� searchVal��Ȼ��ֱ�����Զ��庯�������� arrA �� arrB �в��� searchVal ����λ�õ��±�
	���������������д��ڶ�� searchVal ���������������ҽ����*/

#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int searchArray(int array[],int x,int n);

int main(void)
{
	int arrA[5], arrB[8], searchVal, positionA, positionB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("������һ�������ҵ�����");
	scanf("%d", &searchVal);

	positionA=searchArray(arrA,searchVal,5);//______________________________  /* userCode(<50�ַ�): ���ú�������searchVal��arrA�е��±� */
	if (-1 == positionA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\narrA: position = %d", positionA);
	}

	positionB=searchArray(arrB,searchVal,8);//______________________________  /* userCode(<50�ַ�): ���ú�������searchVal��arrB�е��±� */
	if (-1 == positionB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\narrB: position = %d\n", positionB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int searchArray(int array[],int x,int n){
	int i,position,flag=0;
	for(i=0;i<n;i++){
		if(array[i]==x){	//>>>�ж�����Ԫ���Ƿ���ڲ���ֵ������Ⱦ�ȡ�±�ֵ��
			position=i;		//>>>���ڲ������������д��ڶ�� searchVal�����flag��Ϊ1��ֱ��break����ѭ�� 
			flag=1;			//>>>�����������д��ڶ��searchVal������������������±�ֵ�ǣ��Ҳ��� flag��Ϊ1��ֱ��break����ѭ�� 
			break;
		}
	} 
	
	if(flag==0){
		position=-1;
	}
	
	return position;
}

