/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中， 
然后分别调用自定义函数计算数组 arrA 和 arrB 各元素最大值（不考虑有多个最大值的情况）所在位置的下标、再输出该下标。*/

#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int maxPos(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], maxPosA, maxPosB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	maxPosA = maxPos(arrA,5);//______________________________  /* userCode(<30字符): 调用函数计算arrA中元素的最大值所在的下标 */
	printf("\nmaxPos(arrA) = %d", maxPosA);
	maxPosB = maxPos(arrB,8);//______________________________  /* userCode(<30字符): 调用函数计算arrB中元素的最大值所在的下标 */
	printf("\nmaxPos(arrB) = %d\n", maxPosB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int maxPos(int array[],int n){
	int i,maxPos=0,max=array[0];  //>>>切记要给初始最大值和初始最大值位置赋初值 
	for(i=1;i<n;i++){				//>>> 若最大值位置不赋初值，假设array[0]为最大值，循环以后不改变maxPos的值，由于未赋初值，maxPos就成了一个随机值 
		if(max<array[i]){
			max=array[i];
			maxPos=i;
		}
	}
	return maxPos;
}

