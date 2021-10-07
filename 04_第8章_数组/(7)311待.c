/*编程实现下列功能： 
1. 从键盘上先后读入两个字符串，假定存储在字符数组 s1 和 s2 中。
	注意，这两个字符串最长均可达到 127 个字符、最短均可为 0 个字符。
2. 将字符串 s2 插入字符串 s1 中，插入方法为： 
	s2 的第 i 个字符插入到原 s1 的第 i 个字符后，
	如果 s2比 s1（假定 s1 的长度为 L1）长，则 s2的第 L1 个字符开始到 s2结尾的所有字符按在 s2中的顺序放在新生成的 s1 后。 
	例如， s1 输入为“123456789”， s2 输入为“abcdefghijk”，则输出的 s1 为“1a2b3c4d5e6f7g8h9ijk”。
3. 在屏幕上输出新生成的 s1。*/
#include <stdio.h>
int main(void)
{
    char str1[128],str2[128],s1[256];
    int len1,len2,i;
    printf("Please input the string1: ");
    gets(str1);
    printf("Please input the string2: ");
    gets(str2);
    
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;str1[i]!='\0';i++){
    	temp=str1[i+1];
    	str1[i+1]=str2[i];
	}
    return 0;
}
