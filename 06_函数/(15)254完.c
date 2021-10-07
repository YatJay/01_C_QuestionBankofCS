/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中， 再读入一个数 num，
	然后分别调用自定义函数在数组和中查找小于num的最大数、输出查找结果。。*/

#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int maxSmallerArray(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, maxA, maxB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	maxA=maxSmallerArray(arrA,5,num);//______________________________  /* userCode(<50字符): 调用函数查找在arrA中小于num的最大数 */
	if (-1 == maxA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMax(arrA) = %d", maxA);
	}

	maxB=maxSmallerArray(arrB,8,num);//______________________________  /* userCode(<50字符): 调用函数查找在arrB中小于num的最大数 */
	if (-1 == maxB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMax(arrB) = %d\n", maxB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int maxSmallerArray(int array[],int n,int num){
	int smaller[n],maxSmaller;
	int countSmaller=0,i,j,flag=0;
	for(i=0,j=0;i<n;i++){
		if(array[i]<num){
			flag=1;
			smaller[j]=array[i];
			j++;
			countSmaller++;
		}
	}
	
	if(flag==1){
		maxSmaller=smaller[0];
		for(i=1;i<countSmaller;i++){
			if(maxSmaller<smaller[i]){
				maxSmaller=smaller[i];
			}
		}
	}
	else if(flag==0){
		maxSmaller=-1;
	}
	
	return maxSmaller;
}


