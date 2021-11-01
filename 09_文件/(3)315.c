/*程序运行时，先从键盘输入一个文本文件的文件名（约定：字符数 ≤ 127 字节，可含路径）
	和一个字符串（约定：字符数 ≤ 20 字节，其中不含空格、 TAB 等，后面称之为 Str），再在屏幕上显示该文件的内容。
	要求显示完内容后，在屏幕上输出文件的行数（行之间以 '\n' 为分隔、每行的长度不定但均 ≤ 200 个字节）、字符串 Str 在文件中第 1 次出现的行号
	和最后一次出现的行号（查找时不区分大小写、不跨行查找，若未找到，则行号显示为 -1）。
把程序运行时测试用的文件“Test.txt” （见附件及文件内容） 保存到计算机*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fp;
    char fname[128],ch;
    int row;
    
    printf("Please input the file name:");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL){
    	printf("Open file error.");
    	exit(0);
	}
    
    
    fclose(fp);
    return 0;
}
