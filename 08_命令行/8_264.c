/*程序的功能是：
	从命令行输入四个字符串，格式为：P264  串1 串2 串3 串4，按示例格式倒序输出这4个字符串。
	命令格式不正确返回29 
	*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc != 5)
	{
		printf("Input error.");
		printf("usage: 8_264  串1 串2 串3 串4\n");
		exit(29);
	}

	printf("串4=%s  串3=%s  串2=%s  串1=%s\n", argv[4], argv[3], argv[2], argv[1]);

	return 0;
}


