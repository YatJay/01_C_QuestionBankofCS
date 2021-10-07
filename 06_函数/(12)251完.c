/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中， 然后分别调用自定义函数在数组 arrA 和 arrB 中查找大于其平均值的元素个数、输出查找结果。*/

#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int countBiggerAvg(int array[],int n);

int main(void)
{
	int arrA[5], arrB[8], countA, countB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	countA=countBiggerAvg(arrA,5);//______________________________  /* userCode(<50字符): 调用函数查找arrA中大于其平均值的元素个数 */
	printf("\nCount(arrA) = %d", countA);
	countB=countBiggerAvg(arrB,8);//______________________________  /* userCode(<50字符): 调用函数查找arrB中大于其平均值的元素个数 */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int countBiggerAvg(int array[],int n){
	int count=0,sum=0,i;
	float avg;
	for(i=0;i<n;i++){
		sum+=array[i];
	}
	avg=(float)sum/n;
	
	for(i=0;i<n;i++){
		if(array[i]>avg){
			count++;
		}
	}
	
	return count;
}

