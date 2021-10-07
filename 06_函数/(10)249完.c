/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中， 再读入一个数 num，
	然后分别调用自定义函数在数组 arrA 和 arrB 中查找大于 num 的元素个数、输出查找结果。*/

#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int countBigger(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, countA, countB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	countA=countBigger(arrA,5,num);//______________________________  /* userCode(<50字符): 调用函数查找arrA中大于num的元素个数 */
	printf("\nCount(arrA) = %d", countA);
	countB=countBigger(arrB,8,num);//______________________________  /* userCode(<50字符): 调用函数查找arrB中大于num的元素个数 */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int countBigger(int array[],int n,int num){
	int count=0,i;
	for(i=0;i<n;i++){
		if(array[i]>num){
			count++;
		}
	}
	return count;
} 

