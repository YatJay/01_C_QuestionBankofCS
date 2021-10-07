/*程序的功能是：
1. 程序运行时先显示“Please input numbers:”，再从键盘上读入一组整数（只考虑 int 型），数与数之间只使用空格或回车作分隔。
	数可正可负，最多 10000 个，但若读入的数为 -222 时，则表示输入结束且 -222 不算在该组数内。
2. 对这一组数按从小到大的顺序进行排序。
3. 将排序后的这一组数输出到屏幕上，输出格式为每行 6 个数，数与数之间使用逗号“,”分隔，
	两个逗号之间的宽度（不算逗号）为 6 且使用左对齐格式。注意，行尾没有逗号。*/

#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* userCode(<50字符): 自定义函数之原型声明 */
______________________________

int main(void)
{
	int i, j, mini;
	int inputData[maxNums] = {0}, dataCount=0;  /* inputData用于保存输入的数据，dataCount记录输入数据的个数 */

	printf("Please input numbers:");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &inputData[i]);
		if (endFlag == inputData[i])
		{
			break;
		}
		dataCount++;
	}

	for (i=0; i<dataCount-1; i++)
	{
		mini = i;
		for (j=i; j<dataCount; j++)
		{
			if (inputData[j] < inputData[mini])
			{
				mini = j;
			}
		}

		______________________________  /* userCode(<50字符): 调用函数交换数据的位置 */
	}

	printf("\nOutput:\n");
	for (i=0; i<dataCount; i++)
	{
		printf("%-6d", inputData[i]);

		if (((i + 1) % 6) != 0 && i != dataCount - 1)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void swap()
