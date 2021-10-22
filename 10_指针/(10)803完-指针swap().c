/*程序的功能是： 从键盘输入两个整数，分别保存到变量 numA 和 numB，调用函数 swap() 实现 numA和 numB 的交换，并在 main() 函数中输出交换过后的 numA 和 numB*/

#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void swap(int *a,int *b);

int main(void)
{
	int numA, numB;

	printf("please input numA, numB: ");
	scanf("%d %d", &numA, &numB);

	swap(&numA,&numB);//______________________________  /* userCode(<40字符): 调用函数实现numA和numB值的交换 */
	printf("\nnumA=%d, numB=%d\n", numA, numB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
