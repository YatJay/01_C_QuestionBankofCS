/*从键盘输入一行可带空格的字符串（约定：字符数 ≤ 127 字节），按逆序输出该字符串。*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128],i,len;
    printf("Please input a string: ");
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--) {  //注意逆序遍历字符数组循环条件i>=0与正序遍历字符数组使用的 str[i]!='\0'的条件不同 
		printf("%c",str[i]);
	}
    
    return 0;
}
