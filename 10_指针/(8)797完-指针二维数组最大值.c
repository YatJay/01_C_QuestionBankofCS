/*程序的功能是： 从键盘读入 5 行 9 列整数保存到二维数组中，调用用户自定义函数查找数组中最大元素（约定只考虑仅有一个最大的情况）及其所在位置的行下标、列下标。*/

#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
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
	/* userCode(<80字符): 调用函数查找数组中最大元素及其所在位置的行下标、列下标 */
	max=maxx(array,&maxRow,&maxCol);//______________________________
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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
