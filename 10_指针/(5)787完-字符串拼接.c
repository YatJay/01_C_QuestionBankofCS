/*����Ĺ����ǣ� �Ӽ������� 2 ���ַ�����Լ��ÿ���ַ������ַ��� �� 80 �ֽڣ������� 2 ���ַ������ӳ�һ�����ַ����������
ע�������в���ʹ�ÿ⺯�� stpcpy()�� strcat()�� strncat()�� strncpy()�� memcpy()�� strcpy() ��ʹ��ͬ���ı��������������ʡ�*/

/*
��ʹ�� strcat()��ֻ��ָ������ַ���ƴ�ӣ�
	 1 ѭ��������str1�ַ���β����¼'\0'���ڵĵ�ַ 
	 2 ѭ������str2����'\0'���ڵĵ�ַ��ʼ����ƴ�� 
	 3 ����ѭ����������*(str2+i)!='\0'������ѭ����������Ҫ *(strn+i)='\0'ʹ�����ַ�����'\0'��β 
	 
*/
#include<stdio.h>

#define MAXLINE 80

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
char *strLianjie(char *str1,char *str2);

int main(void)
{
	char str[2][MAXLINE+1], strall[2*MAXLINE+1]="", *pNew;

	printf("input 2 strings:\n");
	gets(str[0]);
	gets(str[1]);

	pNew = strLianjie(strLianjie(strall, str[0]), str[1]);
	printf("\nResult: %s\n", pNew);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
char *strLianjie(char *str1,char *str2){
	char *strn;
	int i;
	//����ѭ�����ڱ������ַ���β����¼'\0'���ڵĵ�ַ 
	for(i=0;*(str1+i)!='\0';i++){
	}	
	strn=str1+i;  //'\0'���ڵĵ�ַ 
	//��'\0'���ڵĵ�ַ��ʼƴ�� 
	for(i=0;*(str2+i)!='\0';i++){
		*(strn+i)=*(str2+i);
	}
	//�ַ���ĩβ��'\0'
	*(strn+i)='\0'; 
	return str1;
}
