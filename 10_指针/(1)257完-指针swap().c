/*程序的功能是： 从键盘输入两个实数，分别保存到变量 numA 和 numB，调用函数 swap() 实现 numA和 numB 的交换，并在 main() 函数中输出交换过后的 numA 和 numB。*/

#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void swap(float *pa,float *pb);

int main(void)
{
	float numA, numB;

	printf("please input numA, numB: ");
	scanf("%f,%f", &numA, &numB);

	swap(&numA, &numB);//______________________________  /* userCode(<40字符): 调用函数实现numA和numB值的交换 */
	printf("\nnumA=%.3f, numB=%.3f\n", numA, numB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void swap(float *pa,float *pb){
	float temp;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}

