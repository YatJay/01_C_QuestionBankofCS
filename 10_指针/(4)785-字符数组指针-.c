/*程序的功能是： 
	将读入的字符串 s1、 s2分别
	调用自定义函数 myswap() 反转，
	然后调用自定义函数 merge()将 s1、 s2 按排列的顺序交叉合并到 s3 中， s1 或 s2 中过长的剩余字符接在 s3 的尾部。
注：程序中不能使用库函数 strrev() 或使用同名的变量、函数、单词*/

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
	//printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
char *myswap(char *str){
	char *re_str;
	int i,len=strlen(str);
	for(i=0;*(str+i)!=0;i++){
		*(re_str+(len-1)-i)=*(str+i);
	}
	*(re_str+(len))='\0';
	return re_str;
	
} 
