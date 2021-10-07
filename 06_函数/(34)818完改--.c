/*程序的功能是： 找出任意的一个 m × n 矩阵每一行上的最大值的列下标并按示例格式要求显示。 m、 n（2 ≤ m ≤ 20， 2 ≤ n ≤ 20）及矩阵元素从键盘输入*/

#include <stdio.h>

#define N 20

/* userCode(<50字符): 自定义函数之原型声明 */
void maxColSubscript(int array[20][20],int m,int n);

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n: ");
	scanf("%d%d", &m, &n);

	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (hang = 0; hang < m; hang++)
	{
		for (lie = 0; lie < n; lie++)
		{
			scanf("%d", &juZhen[hang][lie]);
		}
	}
	puts("");

	maxColSubscript(juZhen,m,n);//______________________________  /* userCode(<50字符): 调用函数找出每一行上的最大值的列下标并按示例格式要求显示 */
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void maxColSubscript(int array[20][20],int m,int n){
	int i,j,max,maxColj;
	for(i=0;i<m;i++){
		max=array[i][0];  //>>>假定最大值为本行第0元素 
		maxColj=0;   //>>>假定最大值所在列为第0列 
		for(j=1;j<n;j++){
			if(max<array[i][j]){  //>>>这个if后别加else{maxColj[i]=0} 了；让其循环遍历这一行，
				max=array[i][j];  //>>>如果后面有大的就改变最大值及其所在列下标，后面没有大的就保持maxColj[i]=0不变 
				maxColj=j;
			}
		}
		printf("The max value in line %d is %d\n",i,maxColj);  //>>>此处改动，对本行进行遍历时直接输出这一行的最大值列下标 ，不必引入数组保存每行最大值列下标 
	}
}

 
