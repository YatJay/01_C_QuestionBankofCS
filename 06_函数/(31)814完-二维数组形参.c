/*程序的功能是：输入 3 行 3 列的矩阵，输出所有元素的累加和。*/

/*
二维数组作为函数参数，实参可以直接使用二维数组名，在被调用函数中对形参数组定义可以指定所有维数的大小，也可以省略第一维的大小说明
	但不能省略第二维的大小，省略第二维的定义是不合法的，编译时会出错
*/

#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
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

	sum=sumOfMartrix(num);//______________________________  /* userCode(<50字符): 调用函数计算矩阵所有元素之和 */
	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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


