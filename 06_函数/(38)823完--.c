/*����Ĺ����ǣ� �� m��2 �� m �� 20���� m �еĶ�ά���� arrayA �е����һ�зŵ���ά���� arrayB �ĵ� 0 ���У�
	�Ѷ�ά���� arrayA �еĵ� 0 �зŵ���ά���� arrayB �����һ���У���ά���� arrayB �е��������ݺ� arrayA һ�¡�*/

/*
ע�⣺�漰�Ը��ӵ�ѭ���������籾���һ��˫ѭ������������ά���飬
	��Ҫ��������һ�α�����������ж�����һЩ�������������˫��ѭ���Ժ�ֻ��Ҫһ��ѭ��������� 
*/

#include <stdio.h>

#define MAX 20

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
void changeMartrix(int arrayA[20][20],int arrayB[20][20],int m);

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	changeMartrix(arrayA,arrayB,m);//______________________________  /* userCode(<60�ַ�): ���ú���ʵ���������ݱ任 */
	printf("\nafter rotate:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void changeMartrix(int arrayA[20][20],int arrayB[20][20],int m){
	//int arrayB[20][20];
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			arrayB[i][j]=arrayA[i][j];
		}
	}
	
	//ֻ�Ķ����е���ʵ����ֻ��Ҫһ��ѭ������ 
	for (j = 0; j < m; j++){
		arrayB[j][0] = arrayA[m - 1][j];
	}
	for (j = 0; j < m; j++){
		arrayB[j][m - 1] = arrayA[0][j];
	}
}



