/*程序运行时，先从键盘输入一个文本文件的文件名（约定：字符数 ≤ 127 字节，可含路径），再在屏幕上显示该文件的内容。 注意，对于文件中的字符“*” ，在屏幕上改为显示字符“@” 。*/

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
		if(ch=='*'){
			putchar('@');
		}
		else{
			putchar(ch);
		}
	}
    
    fclose(fp);
    return 0;
}
