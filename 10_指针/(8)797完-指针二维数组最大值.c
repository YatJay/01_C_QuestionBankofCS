/*����Ĺ����ǣ� �Ӽ��̶��� 5 �� 9 ���������浽��ά�����У������û��Զ��庯���������������Ԫ�أ�Լ��ֻ���ǽ���һ�������������������λ�õ����±ꡢ���±ꡣ*/

#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
int maxx(int **parr1,int *maxRow,int *maxCol);

int main(void)
{
	int array[3][3], i, j, max, maxRow, maxCol;

	printf("Input matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	//printf("0000\n");
	/* userCode(<80�ַ�): ���ú����������������Ԫ�ؼ�������λ�õ����±ꡢ���±� */
	max=maxx(array,&maxRow,&maxCol);//______________________________
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int maxx(int **parr1,int *maxRow,int *maxCol){
	int *parr=(int *)parr1;
	int i,maxnum,maxsub;
	maxnum=*parr;
	for(i=1;i<9;i++){
		if(maxnum<*(parr+i)){
			maxnum=*(parr+i);
			maxsub=i;
		}
	}
	//printf("0000\n");
	*maxRow=maxsub/3;
	*maxCol=maxsub%3;
	return maxnum;
}
