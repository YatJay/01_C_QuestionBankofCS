/*�Ӽ��������� 5 ���ַ�����Լ����ÿ���ַ������ַ��� �� 80 �ֽڣ�����������������������
ע�������в���ʹ�ÿ⺯�� strcpy()�� strcat()�� strncat()�� strncpy()�� memcpy()�� strcpy()�� 
	memicmp()��memcmp()�� stricmp()�� strncmp()�� strncmpi()�� strnicmp()�� strcmp() �� strcmpi() ��ʹ��ͬ���ı��������������ʡ�*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[5][80],temp[80];
	int i,j; 
	
	printf("Please input 5 strings: \n");
	for(i=0;i<5;i++){
		gets(str[i]);  //�Զ�ά�ַ�����ڶ�ά��ʼ������ 
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
