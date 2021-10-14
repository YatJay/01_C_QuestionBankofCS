/*从键盘上输入 5 个字符串（约定：每个字符串中字符数 ≤ 80 字节），对其进行升序排序并输出。
注：程序中不能使用库函数 strcpy()、 strcat()、 strncat()、 strncpy()、 memcpy()、 strcpy()、 
	memicmp()、memcmp()、 stricmp()、 strncmp()、 strncmpi()、 strnicmp()、 strcmp() 和 strcmpi() 或使用同名的变量、函数、单词。*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[5][80],temp[80];
	int i,j; 
	
	printf("Please input 5 strings: \n");
	for(i=0;i<5;i++){
		gets(str[i]);  //对二维字符数组第二维初始化方法 
	}
	
	for(i=0;i<5;i++){
		for(j=0;str[i][j]!='\0';j++){
			if(a[i][j]>a[i][j+1]){
				
			}
		}
	}
	
	printf("---------------------------\n");
	for(i=0;i<5;i++){
		puts(str[i]); 
	} 
	
    
    return 0;
}
