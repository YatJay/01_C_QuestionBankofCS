/*����Ĺ����ǣ����� 3 �� 3 �еľ����������Ԫ�ص��ۼӺ͡�*/

/*
��ά������Ϊ����������ʵ�ο���ֱ��ʹ�ö�ά���������ڱ����ú����ж��β����鶨�����ָ������ά���Ĵ�С��Ҳ����ʡ�Ե�һά�Ĵ�С˵��
	������ʡ�Եڶ�ά�Ĵ�С��ʡ�Եڶ�ά�Ķ����ǲ��Ϸ��ģ�����ʱ�����
*/

#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int sumOfMartrix(int array[3][3]);

int main(void)
{
	int num[3][3], i, j, sum;

	printf("Please input the 3x3 Matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	sum=sumOfMartrix(num);//______________________________  /* userCode(<50�ַ�): ���ú��������������Ԫ��֮�� */
	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int sumOfMartrix(int array[3][3]){
	int i,j,sum;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			sum+=array[i][j];
		}
	}
	return sum;
}


