/*����Ĺ����ǣ� �Ӽ������������������ֱ𱣴浽���� numA �� numB�����ú��� swap() ʵ�� numA�� numB �Ľ��������� main() ������������������ numA �� numB*/

#include<stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void swap(int *a,int *b);

int main(void)
{
	int numA, numB;

	printf("please input numA, numB: ");
	scanf("%d %d", &numA, &numB);

	swap(&numA,&numB);//______________________________  /* userCode(<40�ַ�): ���ú���ʵ��numA��numBֵ�Ľ��� */
	printf("\nnumA=%d, numB=%d\n", numA, numB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
