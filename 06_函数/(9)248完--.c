/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� 
	Ȼ��ֱ�����Զ��庯���������� arrA �� arrB ��Ԫ����Сֵ���������ж����Сֵ�����������λ�õ��±ꡢ��������±ꡣ*/
	
#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int minPos(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], minPosA, minPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	minPosA = minPos(arrA,5);//______________________________  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص���Сֵ���ڵ��±� */
	printf("\nminPos(arrA) = %d", minPosA);
	minPosB = minPos(arrB,8);//______________________________  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص���Сֵ���ڵ��±� */
	printf("\nminPos(arrB) = %d\n", minPosB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int minPos(int array[],int n){
	int i,minPos=0,min=array[0];		//>>>�м�Ҫ����ʼ��Сֵ�ͳ�ʼ��Сֵλ�ø���ֵ 
	for(i=1;i<n;i++){					//>>> ����Сֵλ�ò�����ֵ������array[0]Ϊ��Сֵ��ѭ���Ժ󲻸ı�minPos��ֵ������δ����ֵ��minPos�ͳ���һ�����ֵ 
		if(min>array[i]){
			min=array[i];
			minPos=i;
		}
	}
	return minPos;
}

