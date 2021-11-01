/*程序的功能是：
	1. 从键盘读入一行字符 Str（其中可以有空格，约定字符数 ≤ 127 字节）和整数 m。
		若 Str 长度为 0，则报错并重新读取，直到符合要求为止；
		若 m 小于 1 或 m 大于 Str 的长度，则报错并重新读取，直至符合要求为止。这一功能由函数 getInput() 实现。
	2. 将字符串 Str 中从第 m 个字符开始的全部字符复制到 dstStr 中。这一功能由函数 copyStr() 实现。
	注：程序中不能使用库函数 stpcpy()、 strcat()、 strncat()、 strncpy()、 memcpy()、 strcpy() 或使用同名的变量、函数、单词*/
	
#include <stdio.h>
#include <string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=2, lineLen<=80, 考生可在本行后添加代码、最多2行、行长<=80字符) */


/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int m, i;
	char Str[128], dstStr[128];
	
	m = getInput(Str);
	printf("\nInput is: Str=%s   m=%d\n", Str, m);

	for (i=0; i<128; i++)
	{
		dstStr[i] = '\0';
	}
	copyStr(Str, m, dstStr);
	printf("\nResult is: %s\n", dstStr);
	
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
