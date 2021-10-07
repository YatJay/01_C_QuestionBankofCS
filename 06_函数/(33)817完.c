/*程序的功能是：从键盘输入一行可带空格的字符串（约定：字符数 ≤ 127 字节），按逆序输出该字符串*/

#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void reverseString(char str[128]);

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
void reverseString(char str0[128]){
	int i,j,len=strlen(str0);
	char str1[128];
	strcpy(str1,str0);
	for(i=len-1,j=0;i>=0;i--){
		str0[j]=str1[i];
		j++;
	}
	str0[j]='\0';
} 
