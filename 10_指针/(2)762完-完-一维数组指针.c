/*函数的功能为：从键盘读入 10 个数存入数组中，找出并显示最小元素及其在数组中的位置。*/

/*
定义形参以及传递参数时int num[]和int *num是等价的 ，甚至使用时也是等价的，可以将指针变量后跟[]作为数组引用 
*/

#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
int FindMin(int *num,int n,int *MinPos);

int main(void)
{
	int num[10], i, MinVal, MinPos;

	printf("Input 10 integers: ");
	for (i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}

	MinVal = FindMin(num, 10, &MinPos);
	printf("\nMinVal=%d MinPos=%d\n", MinVal, MinPos);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int FindMin(int *num,int n,int *minpos){   //>>>定义形参以及传递参数时int num[]和int *num是等价的 
	int i;
	int minval=num[0];
	*minpos=0;
	for(i=1;i<n;i++){
		if(minval>num[i]){
			minval=num[i];
			*minpos=i;
		}
	}
	return minval;
}
