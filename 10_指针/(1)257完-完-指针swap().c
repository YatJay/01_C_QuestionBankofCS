/*����Ĺ����ǣ� �Ӽ�����������ʵ�����ֱ𱣴浽���� numA �� numB�����ú��� swap() ʵ�� numA�� numB �Ľ��������� main() ������������������ numA �� numB��*/

#include<stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void swap(float *pa,float *pb);

int main(void)
{
	float numA, numB;

	printf("please input numA, numB: ");
	scanf("%f,%f", &numA, &numB);

	swap(&numA, &numB);//______________________________  /* userCode(<40�ַ�): ���ú���ʵ��numA��numBֵ�Ľ��� */
	printf("\nnumA=%.3f, numB=%.3f\n", numA, numB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void swap(float *pa,float *pb){
	float temp;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}

