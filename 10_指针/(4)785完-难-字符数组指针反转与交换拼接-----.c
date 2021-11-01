/*程序的功能是： 
	将读入的字符串 s1、 s2分别
	调用自定义函数 myswap() 反转，
	然后调用自定义函数 merge()将 s1、 s2 按排列的顺序交叉合并到 s3 中， s1 或 s2 中过长的剩余字符接在 s3 的尾部。
注：程序中不能使用库函数 strrev() 或使用同名的变量、函数、单词*/

/*
1.函数返回指针必须返回主函数传进来的，函数内部定义的指针无法返回
	C 不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量。
	因为局部变量是存储在内存的栈区内，当函数调用结束后，局部变量所占的内存地址便被释放了，
	因此当其函数执行完毕后，函数内的变量便不再拥有那个内存地址，所以不能返回其指针。
	除非将其变量定义为 static 变量，static 变量的值存放在内存中的静态数据区，不会随着函数执行的结束而被清除，故能返回其地址。
2.使用指针进行数组元素反转的一般算法
3.使用指针对两个数组进行顺序交叉合并的一般算法 

*/
#include <stdio.h>
#include <string.h>

/* myswap完成字符串str内容的反转，返回字符串str的地址 */
char *myswap(char *str);
/* merge完成字符串strA,strB顺序交叉合并至strC，返回字符串strC的地址 */
char *merge(char *strA, char *strB, char *strC); 

int main(void)
{
	char s1[100], s2[100], s3[200];

	printf("Enter string s1: ");
	gets(s1);
	printf("Enter string s2: ");
	gets(s2);

	printf("\nstring s1 reversed: %s", myswap(s1));
	printf("\nstring s2 reversed: %s", myswap(s2));
	printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
char *myswap(char *str)
{   
	char *sp, *st, ch;

	sp = str;  //记录字符数组首地址 
	st = str + strlen(str) - 1;  //记录字符数组最后一个字符地址 
	while (sp <= st)
	{
		ch = *sp;  //sp指向的数组前端位置将被置换为数组尾元素，使用ch暂存 
		*sp = *st;  //sp指向的数组前端位置置换为数组尾元素 
		*st = ch;  //数组尾元素换成ch暂存的数组前端位置元素 
		sp++;  //数组前端指针后移 
		st--;  //数组后端指针前移 
	}

	return str;  //函数返回指针必须返回主函数传进来的，函数内部定义的指针无法返回，函数调用结束后，局部变量所占内存就被释放 
}

char *merge(char *strA, char *strB, char *strC)
{
	char *tmp = strC;

	while (*strA || *strB){
		if (*strA)
		{
			*strC = *strA;
			strC++;
			strA++;
		}

		if (*strB)
		{
			*strC = *strB;
			strC++;
			strB++;
		}
	}
	*strC = '\0'; 

	return tmp;
}


