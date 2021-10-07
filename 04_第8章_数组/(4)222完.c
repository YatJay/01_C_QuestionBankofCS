/*从键盘上读入一行字符（约定：字符数 ≤ 127 字节） ，按以下方法将其加密变换：
A→Z， B→Y， C→X， …， Z→A； a→z， b→y， c→x， …， z→a。
即字母 A 变成 Z、字母 B 变成 Y、…，非字母字符不变。最后在屏幕上先显示这一行字符的长度，再显示生成的密文。*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128],out[128],capital[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',},lower[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};
    int i;
	printf("Please input a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    	if(str[i]>='A'&&str[i]<='Z'){
    		out[i]=capital[25-i] ;
		}
		else if(str[i]>='a'&&str[i]<='z'){
    		out[i]=lower[25-i] ;
		}
		else{
			out[i]=str[i];
		}
	}
	out[i]='\0';
	printf("%d %s",strlen(str),out);
	    
    return 0;
}
