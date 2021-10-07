/*程序 P241.c 已编写部分代码（见文件内容） ，请根据程序中的要求完善程序（在指定的位置添加代码或将__________换成代码）。
程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中，然后分别调用自定义函数输出数组 arrA 和 arrB 的各元素。*/

#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */

void printArray(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8];

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	printf("\narrA = ");
	printArray(arrA,5);//______________________________  /* userCode(<30字符): 调用函数输出arrA的所有元素 */
	printf("\narrB = ");
	printArray(arrB,8);//______________________________  /* userCode(<30字符): 调用函数输出arrB的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void printArray(int array[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}

