/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中，然后分别调用自定义函数计算数组 arrA 和 arrB 各元素的最大值、再输出最大值。*/

#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int maxArray(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], maxA, maxB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	maxA=maxArray(arrA,5);//______________________________  /* userCode(<30字符): 调用函数计算arrA中元素的最大值 */
	printf("\nMax(arrA) = %d", maxA);
	maxB=maxArray(arrB,8);//______________________________  /* userCode(<30字符): 调用函数计算arrB中元素的最大值 */
	printf("\nMax(arrB) = %d\n", maxB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int maxArray(int array[],int n){
	int max,i;
	for(i=1,max=array[0];i<n;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
	return max;
}

