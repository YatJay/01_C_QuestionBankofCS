/*���� P241.c �ѱ�д���ִ��루���ļ����ݣ� ������ݳ����е�Ҫ�����Ƴ�����ָ����λ����Ӵ����__________���ɴ��룩��
����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У�Ȼ��ֱ�����Զ��庯��������� arrA �� arrB �ĸ�Ԫ�ء�*/

#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */

void printArray(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8];

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	printf("\narrA = ");
	printArray(arrA,5);//______________________________  /* userCode(<30�ַ�): ���ú������arrA������Ԫ�� */
	printf("\narrB = ");
	printArray(arrB,8);//______________________________  /* userCode(<30�ַ�): ���ú������arrB������Ԫ�� */

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void printArray(int array[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}

