/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У�Ȼ��ֱ�����Զ��庯���������� arrA �� arrB ��Ԫ�ص���Сֵ���������Сֵ��*/

#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int minArray(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], minA, minB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	minA=minArray(arrA,5);//______________________________  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص���Сֵ */
	printf("\nMin(arrA) = %d", minA);
	minB=minArray(arrB,8);//______________________________  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص���Сֵ */
	printf("\nMin(arrB) = %d\n", minB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int minArray(int array[],int n){
	int min,i;
	for(i=1,min=array[0];i<n;i++){
		if(min>array[i]){
			min=array[i];
		}
	}
	return min;
}



