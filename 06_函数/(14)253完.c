/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中， 再读入一个数 num（这些数均≥ 0），
	然后分别调用自定义函数在数组 arrA 和 arrB 中查找大于 num 的最小数、输出查找结果。*/
	
#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int minBiggerArray(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, minA, minB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	minA=minBiggerArray(arrA,5,num);//______________________________  /* userCode(<50字符): 调用函数查找在arrA中大于num的最小数 */
	if (-1 == minA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMin(arrA) = %d", minA);
	}

	minB=minBiggerArray(arrB,8,num);//______________________________  /* userCode(<50字符): 调用函数查找在arrB中大于num的最小数 */
	if (-1 == minB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMin(arrB) = %d\n", minB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int minBiggerArray(int array[],int n,int num){
	int bigger[n],minBigger;
	int countBigger=0,i,j,flag=0;
	for(i=0,j=0;i<n;i++){
		if(array[i]>num){
			flag=1;
			bigger[j]=array[i];
			j++;
			countBigger++;
		}
	}
	
	if(flag==1){
		minBigger=bigger[0];
		for(i=1;i<countBigger;i++){
			if(minBigger>bigger[i]){
				minBigger=bigger[i];
			}
		}
	}
	else if(flag==0){
		minBigger=-1;
	}
	
	return minBigger;
}




