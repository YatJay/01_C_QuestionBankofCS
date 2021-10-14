/*程序的功能是： 将从键盘读入的一个十六进制字符串转换成一个十进制数后输出。注意：
	1. 可以只考虑转换成的十进制大小不会超过 long int 型所能表示的最大数。
	2. 只需处理正数，不处理负数。
	3. 输入的字母可以是大写也可以小写。
	4. 程序中不能使用库函数 isxdigit()、 sscanf() 或使用同名的变量、函数、单词。*/

#include<stdio.h>
#include<math.h> 
/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
int isHex(char str[]);
long int HexToDec(char str[]);


/* User Code End(考生添加代码结束) */

int main(void)
{
	int flag;  /* 标志输入数据是否合法，0表示不合法 */
	long int result10;  /* 转换结果 */
	char str[20];

	printf("input a data:");
	gets(str);

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	flag=isHex(str);
	if(flag==1) result10=HexToDec(str);

	/* User Code End(考生添加代码结束) */

	if (0 == flag)
	{
		printf("\ndata is error.\n");
	}
	else
	{
		printf("\nThe result is: %ld\n", result10);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
int isHex(char str[]){
	int flag=0,i;
	for(i=0;str[i]!='\0';i++){
		if((str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F')||(str[i]>='0'&&str[i]<='9')){
			flag=1;
		}
	}
	return flag;
}

long int HexToDec(char str[]){
	long int dec=0;
	int i,j,count=0;
	
	for(i=0;str[i]!='\0';i++){
		count++;
	}
	
	for(i=count-1,j=0;i>=0;i--){
			dec+=str[i]*pow(16,j);
			j++;
		}
	
	return dec;
}



