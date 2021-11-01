/*程序运行时，先从键盘输入一个文本文件的文件名（约定：字符数 ≤ 127 字节，可含路径），再在屏幕上显示该文件的内容*/

/*
1.fp=fopen(fname,"r"); fopen()中的文件名部分可以写字符串变量(即C语言字符数组地址、字符指针) 
2.循环遍历输出显示文件固定格式 ：本质上是将文本文件看做是字符流，fget()读取，读到什么就输出什么，直到读取到文件末尾 
	while ((ch=fgetc(fp))!=EOF){  //固定：循环遍历文件使用 
		putchar(ch);
	}
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char fname[128];
    char ch;
    
    printf("Input the file name: ");
    scanf("%s",fname);  //>>或使用gets(fname) [#include string.h]
    fp=fopen(fname,"r");
    if(fp==NULL){
    	printf("File open error.");
    	exit(0);
	}
	
	printf("------------------------File Begin:----------------------\n");
	while ((ch=fgetc(fp))!=EOF){  //固定：循环遍历文件使用 
		putchar(ch);
	}
    
    fclose(fp);
    return 0;
}
