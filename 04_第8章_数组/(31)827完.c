/*�Ӽ������� 3 ���ɴ��ո���ַ�����Լ�����ַ��� �� 127 �ֽڣ���������������ַ����ĳ��ȡ�*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[128],str2[128],str3[128];
    int len1,len2,len3,max;
    printf("Please input the first string:");
    gets(str1);
    printf("Please input the second string:");
    gets(str2);
    printf("Please input the third string:");
    gets(str2);
    
    len1=strlen(str1);
    len2=strlen(str2);
    len2=strlen(str2);
    
    if(len1>=len2&&len1>=len3){
    	max=len1;
	}
	else if(len2>=len1&&len2>=len3){
    	max=len2;
	}
	else if(len3>=len1&&len3>=len2){
    	max=len3;
	}
	
	printf("The maxium length is %d.",max);
    
    return 0;
}
