/*程序的功能是： 从键盘分别读入 5 个数到 arrA 中、 8 个数至 arrB 中， 
	再读入一个欲查找的数 searchVal，然后分别调用自定义函数在数组 arrA 和 arrB 中查找 searchVal 所在位置的下标
	（不考虑在数组中存在多个 searchVal 的情况）、输出查找结果。*/

#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int searchArray(int array[],int x,int n);

int main(void)
{
	int arrA[5], arrB[8], searchVal, positionA, positionB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请输入一个欲查找的数：");
	scanf("%d", &searchVal);

	positionA=searchArray(arrA,searchVal,5);//______________________________  /* userCode(<50字符): 调用函数查找searchVal在arrA中的下标 */
	if (-1 == positionA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\narrA: position = %d", positionA);
	}

	positionB=searchArray(arrB,searchVal,8);//______________________________  /* userCode(<50字符): 调用函数查找searchVal在arrB中的下标 */
	if (-1 == positionB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\narrB: position = %d\n", positionB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int searchArray(int array[],int x,int n){
	int i,position,flag=0;
	for(i=0;i<n;i++){
		if(array[i]==x){	//>>>判断数组元素是否等于查找值，若相等就取下标值，
			position=i;		//>>>由于不考虑在数组中存在多个 searchVal的情况flag置为1后直接break跳出循环 
			flag=1;			//>>>若考虑数组中存在多个searchVal的情况，引入数组存放下标值们，且不必 flag置为1后直接break跳出循环 
			break;
		}
	} 
	
	if(flag==0){
		position=-1;
	}
	
	return position;
}

