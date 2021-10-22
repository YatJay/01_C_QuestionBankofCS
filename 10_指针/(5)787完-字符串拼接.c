/*程序的功能是： 从键盘输入 2 个字符串（约定每个字符串中字符数 ≤ 80 字节），将此 2 个字符串连接成一个新字符串并输出。
注：程序中不能使用库函数 stpcpy()、 strcat()、 strncat()、 strncpy()、 memcpy()、 strcpy() 或使用同名的变量、函数、单词。*/

/*
不使用 strcat()而只用指针进行字符串拼接：
	 1 循环遍历到str1字符串尾，记录'\0'所在的地址 
	 2 循环遍历str2，从'\0'所在的地址开始依次拼接 
	 3 由于循环的条件是*(str2+i)!='\0'，所以循环结束后需要 *(strn+i)='\0'使得新字符串以'\0'结尾 
	 
*/
#include<stdio.h>

#define MAXLINE 80

/* userCode(<80字符): 自定义函数之原型声明 */
char *strLianjie(char *str1,char *str2);

int main(void)
{
	char str[2][MAXLINE+1], strall[2*MAXLINE+1]="", *pNew;

	printf("input 2 strings:\n");
	gets(str[0]);
	gets(str[1]);

	pNew = strLianjie(strLianjie(strall, str[0]), str[1]);
	printf("\nResult: %s\n", pNew);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
char *strLianjie(char *str1,char *str2){
	char *strn;
	int i;
	//以下循环用于遍历到字符串尾，记录'\0'所在的地址 
	for(i=0;*(str1+i)!='\0';i++){
	}	
	strn=str1+i;  //'\0'所在的地址 
	//从'\0'所在的地址开始拼接 
	for(i=0;*(str2+i)!='\0';i++){
		*(strn+i)=*(str2+i);
	}
	//字符串末尾补'\0'
	*(strn+i)='\0'; 
	return str1;
}
