/*�Ӽ����϶���һ���ַ���Լ�����ַ��� �� 127 �ֽڣ� �������·���������ܱ任��
A��Z�� B��Y�� C��X�� ���� Z��A�� a��z�� b��y�� c��x�� ���� z��a��
����ĸ A ��� Z����ĸ B ��� Y����������ĸ�ַ����䡣�������Ļ������ʾ��һ���ַ��ĳ��ȣ�����ʾ���ɵ����ġ�*/
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
