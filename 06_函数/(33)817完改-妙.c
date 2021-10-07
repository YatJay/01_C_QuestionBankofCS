/*程序的功能是：从键盘输入一行可带空格的字符串（约定：字符数 ≤ 127 字节），按逆序输出该字符串*/

#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void reverseString(char str[]);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	reverseString(str);//______________________________  /* userCode(<50字符): 调用函数将字符串str逆序存放 */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void reverseString(char str[]){  //一维数组形参可以不放数组大小 
	int len, i, j, tmp;
	len = strlen(str);
	for (i = 0, j = len - 1; i < j; i++, j--){  //从字符数组的首i=0尾j=len-1分别开始遍历，循环条件是i<j 
		tmp = str[i];							//临时变量用于暂时存放 
		str[i] = str[j];
		str[j] = tmp;
	}
} 
