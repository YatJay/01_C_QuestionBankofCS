/*����Ĺ����ǣ� �Ӽ��̶��� 5 �� 9 ���������浽��ά�����У������û��Զ��庯���������������Ԫ�أ�Լ��ֻ���ǽ���һ�������������������λ�õ����±ꡢ���±ꡣ*/

#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
int maxx(int (*parr0)[3],int *maxRow,int *maxCol);

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
//���½��иĶ� 
//������ָ����뺯���������ڲ�ʹ����ָ����ʶ�ά���� 
int maxx(int (*parr0)[3],int *maxRow,int *maxCol){
	int (*parr)[3]=parr0;
	int i,j;
	int maxnum;
	
	maxnum=*(*(parr));
	*maxRow=0;
	*maxCol=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(*(*(parr+i)+j)>maxnum){
				maxnum=*(*(parr+i)+j);
				*maxRow=i;
				*maxCol=j;
			}
		}
	}
	return maxnum;
}
