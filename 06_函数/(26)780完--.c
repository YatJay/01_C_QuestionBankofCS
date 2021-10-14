/*程序的功能是： 从键盘上读入一行字符，在屏幕上输出该行字符的长度及内容（先输出长度，后输出内容），具体要求有：
	1. 以回车表示行结束且回车不计入输入内容。若读入过程中发生错误或遇到文件结束，则也表示行输入结束。
	2. 若用户输入时输入了很多字符，则仅读入前 100 个字符。
	3. 不能使用库函数 gets()、 fgets()、 strlen() 或使用同名的变量、函数、单词。*/

/*
getchar()和scanf()的区分：
getchar()
【功能】用于从标准输入控制台读取字符，原型：int getchar(void);
【参数】该函数没有参数。
【返回值】函数的返回值为用户输入的第一个字符的ASCII码，若出错返回-1，且将用户输入的字符回显到屏幕。
		如果用户在按回车键之前输入了不只一个字符，其他字符会保留在键盘缓冲区中，等待后续getchar()调用读取。
		也就是说，后续的getchat()调用不会等待用户按键，而是直接读取缓冲区中的字符，直到缓冲区的字符读取完毕后，才等待用户按键。

scanf()以空格、回车、制表符作为字符串的终止符，不读走空格、制表符、回车符，仍留在缓冲区中

注意：请仔细对比，辨析在循环中使用分支语句，何时需要break跳出，何时只需令其在if下执行而不必管else的情况？ 
*/

#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int conutStr(char string[]);

int main(void)
{
	int Len;
	char String[101] = "?????????????????????????????????????????????????????????????";

	printf("input a string: ");
	Len=conutStr(String);//______________________________  /* userCode(<50字符): 调用函数实现输入并统计输入字符个数 */

	printf("\nThe string lenth is: %d\n", Len);
	printf("The string is: %s\n", String);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int conutStr(char string[]){
	char temp;
	int i,len=0;
	for(i=0;i<101;i++){
		temp=getchar();   //需要手动统计字符数组长度的时候需要用getchar()而不能使用scanf() 
		if(temp!='\n'){
			string[i]=temp;
			len++;
		}
		else{   //何时要给if配else：需要-即时-跳出循环的时候 
			break;
		}
	}
	string[i]='\0';
	return len;
}
