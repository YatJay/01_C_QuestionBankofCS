/*编写一程序实现以下功能：
1. 程序运行时先显示“Please input numbers:”，再从键盘上读入一组整数（只考虑 int 型），数与数之间只使用空格或回车作分隔。
	数可正可负，最多 10000 个，但若读入的数为 -222 时，则表示输入结束且 -222 不算在该组数内。
2. 对这一组数按从小到大的顺序进行排序。
3. 将排序后的这一组数输出到屏幕上，输出格式为每行 6 个数，数与数之间使用逗号“,” 分隔，两个逗号之间的宽度（不算逗号）为 6 且使用左对齐格式。
	注意，行尾没有逗号。*/

/*
重要：
1.冒泡排序 
*/
#include <stdio.h>
int main(void)
{
	int arr[10000], tmp, i, j, count = 0;
	printf("Please input numbers: ");
	//此循环用于数组接收键盘输入赋值 
	for (i = 0; i < 10000; i++)
	{
		scanf("%d", &tmp);	//临时变量接收输入；判断是否-222决定存入数组或是跳出数组赋值循环 
		if (tmp != -222)
		{
			arr[i] = tmp;
			count++;  //整型数组计数器，统计元素个数备用 
		}
		else
		{
			break;
		}
	}
	//冒泡排序算法 
	for (j = 1; j < count; j++)
	{
		for (i = 0; i < count - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	printf("\nOutput:\n");
	//此循环用于格式输出整型数组 
	for (i = 0; i < count; i++)
	{
		if ((i + 1) % 6 == 0 || i == count - 1)
		{
			printf("%-6d\n", arr[i]);
		}
		else
		{
			printf("%-6d,", arr[i]);
		}
	}
	return 0;
}
