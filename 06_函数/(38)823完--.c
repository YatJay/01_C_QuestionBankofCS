/*程序的功能是： 将 m（2 ≤ m ≤ 20）行 m 列的二维数组 arrayA 中的最后一行放到二维数组 arrayB 的第 0 列中，
	把二维数组 arrayA 中的第 0 行放到二维数组 arrayB 的最后一列中，二维数组 arrayB 中的其他数据和 arrayA 一致。*/

/*
注意：涉及略复杂的循环遍历，如本题的一个双循环操作两个二维数组，
	不要总想着在一次遍历中完成所有动作，一些例外情况往往出双重循环以后只需要一重循环即可完成 
*/

#include <stdio.h>

#define MAX 20

/* userCode(<80字符): 自定义函数之原型声明 */
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

	changeMartrix(arrayA,arrayB,m);//______________________________  /* userCode(<60字符): 调用函数实现数组内容变换 */
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

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void changeMartrix(int arrayA[20][20],int arrayB[20][20],int m){
	//int arrayB[20][20];
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			arrayB[i][j]=arrayA[i][j];
		}
	}
	
	//只改动单行单列实际上只需要一重循环即可 
	for (j = 0; j < m; j++){
		arrayB[j][0] = arrayA[m - 1][j];
	}
	for (j = 0; j < m; j++){
		arrayB[j][m - 1] = arrayA[0][j];
	}
}



