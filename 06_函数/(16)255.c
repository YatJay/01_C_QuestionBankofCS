/*程序的功能是：从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中，再读入一个数 num（这些数均≥ 0），
	然后分别调用自定义函数在数组 arrA 和 arrB 中查找大于 num 的最小数（不考虑有多个最大值的情况）所在位置的下标、再输出该下标。*/
	
#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int posMaxSmaller(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, minPosA, minPosB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	posMaxSmaller(arrA,5,num);//______________________________  /* userCode(<50字符): 调用函数查找在arrA中大于num的最小数所在的下标 */
	if (-1 == minPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nminPos(arrA) = %d", minPosA);
	}

	posMaxSmaller(arrB,8,num);//______________________________  /* userCode(<50字符): 调用函数查找在arrB中大于num的最小数所在的下标 */
	if (-1 == minPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nminPos(arrB) = %d\n", minPosB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int posMaxSmaller(int array[],int n,int num){
	int i,posMaxSmaller,maxSmaller,flag=0;
	for(i=0;i<n;i++){
		if(array[i]>num){
			flag=1;
			
		}
	}
	
	return posMaxSmaller;
}

