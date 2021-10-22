/*程序的功能是： 将 3 位学生 4 门课成绩读入并存储在二维数组 score 中，然后输出第 n（约定 n ≥ 2）个学生的成绩。
注： 要求用户编程部分对数组 score 及其元素的访问必须使用指针实现，即自定义函数头和函数体中不得出现数组下标形式的表示法。*/

/*
1.二维数组行指针可以当做二维数组名一样在遍历中使用

2.理解二维数组的行指针： 
*(p+1)+1表示第 1 行第 1 个元素(从第0行开始数，从第0列开始数)的地址。如何理解呢？
    *(p+1)单独使用时表示的是第 1 行数据，放在表达式中会被转换为第 1 行数据的首地址，也就是第 1 行第 0 个元素的地址，因为使用整行数据没有实际的含义，编译器遇到这种情况都会转换为指向该行第 0 个元素的指针；就像一维数组的名字，在定义时或者和 sizeof、& 一起使用时才表示整个数组，出现在表达式中就会被转换为指向数组第 0 个元素的指针。
    *(*(p+1)+1)表示第 1 行第 1 个元素的值。很明显，增加一个 * 表示取地址上的数据。

3.本题中使用的 *(*(ppscore+i)+j)运算过程 ： 
	先计算 *(ppscore+i)得到的是第i行的首地址即第i行第0个元素地址；
	再对该地址+j为 *(ppscore+i)+j表示本行第j个元素的地址；
	再取 *(ppscore+i)+j 指向得内容值 *(*(ppscore+i)+j)即数组元素的值。 
*/

#include<stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
void search(float (*ppscore)[4],int n);

int main(void)
{
	int n, i;
	float score[3][4];

	printf("input student's score:\n");
	for (i=0; i<=2; i++)
	{
		printf("    student %d: ", i);
		scanf("%f %f %f %f", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}

	printf("\ninput student No: ");
	scanf("%d", &n);
	search(score,n);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void search(float (*ppscore)[4],int n){
	int i,j;
	for(i=0;i<3;i++){
		//以下使用数组下标格式输出：二维数组行指针可以当做二维数组名一样在遍历中使用 
		for(j=0;j<4;j++){
			if(i==n){
			printf("%5.2f",ppscore[i][j]);
		}
		}
		puts("\n");
		
		//以下直接使用二维数组行指针进行遍历：*(*(ppscore+i)+j)表达式含义： 
		//先计算 *(ppscore+i)得到的是第i行的首地址即第i行第0个元素地址；
		//再对该地址+j为 *(ppscore+i)+j表示本行第j个元素的地址；
		//再取 *(ppscore+i)+j 指向得内容值 *(*(ppscore+i)+j)即数组元素的值。 
		for(j=0;j<4;j++){
			if(i==n){
			printf("%5.2f",*(*(ppscore+i)+j));
		}
		}
	}
}

