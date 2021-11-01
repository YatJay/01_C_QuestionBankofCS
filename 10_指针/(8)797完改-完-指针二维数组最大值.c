/*程序的功能是： 从键盘读入 5 行 9 列整数保存到二维数组中，调用用户自定义函数查找数组中最大元素（约定只考虑仅有一个最大的情况）及其所在位置的行下标、列下标。*/

#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
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
	/* userCode(<80字符): 调用函数查找数组中最大元素及其所在位置的行下标、列下标 */
	max=maxx(array,&maxRow,&maxCol);//______________________________
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
//以下进行改动 
//传递行指针进入函数，函数内部使用行指针访问二维数组 
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
