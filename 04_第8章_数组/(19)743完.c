/*�Ӽ�������һ�пɴ��ո���ַ�����Լ�����ַ��� �� 127 �ֽڣ���������������ַ�����*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128],i,len;
    printf("Please input a string: ");
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--) {  //ע����������ַ�����ѭ������i>=0����������ַ�����ʹ�õ� str[i]!='\0'��������ͬ 
		printf("%c",str[i]);
	}
    
    return 0;
}
