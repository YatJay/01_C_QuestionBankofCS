/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� 
Ȼ��ֱ�����Զ��庯���������� arrA �� arrB ��Ԫ�����ֵ���������ж�����ֵ�����������λ�õ��±ꡢ��������±ꡣ*/

#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int maxPos(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], maxPosA, maxPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	maxPosA = maxPos(arrA,5);//______________________________  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص����ֵ���ڵ��±� */
	printf("\nmaxPos(arrA) = %d", maxPosA);
	maxPosB = maxPos(arrB,8);//______________________________  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص����ֵ���ڵ��±� */
	printf("\nmaxPos(arrB) = %d\n", maxPosB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int maxPos(int array[],int n){
	int i,maxPos=0,max=array[0];  //>>>�м�Ҫ����ʼ���ֵ�ͳ�ʼ���ֵλ�ø���ֵ 
	for(i=1;i<n;i++){				//>>> �����ֵλ�ò�����ֵ������array[0]Ϊ���ֵ��ѭ���Ժ󲻸ı�maxPos��ֵ������δ����ֵ��maxPos�ͳ���һ�����ֵ 
		if(max<array[i]){
			max=array[i];
			maxPos=i;
		}
	}
	return maxPos;
}

