/*����Ĺ����ǣ� 
	��������ַ��� s1�� s2�ֱ�
	�����Զ��庯�� myswap() ��ת��
	Ȼ������Զ��庯�� merge()�� s1�� s2 �����е�˳�򽻲�ϲ��� s3 �У� s1 �� s2 �й�����ʣ���ַ����� s3 ��β����
ע�������в���ʹ�ÿ⺯�� strrev() ��ʹ��ͬ���ı���������������*/

#include <stdio.h>
#include <string.h>

/* myswap����ַ���str���ݵķ�ת�������ַ���str�ĵ�ַ */
char *myswap(char *str);
/* merge����ַ���strA,strB˳�򽻲�ϲ���strC�������ַ���strC�ĵ�ַ */
char *merge(char *strA, char *strB, char *strC); 

int main(void)
{
	char s1[100], s2[100], s3[200];

	printf("Enter string s1: ");
	gets(s1);
	printf("Enter string s2: ");
	gets(s2);

	printf("\nstring s1 reversed: %s", myswap(s1));
	printf("\nstring s2 reversed: %s", myswap(s2));
	//printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
char *myswap(char *str){
	char *re_str;
	int i,len=strlen(str);
	for(i=0;*(str+i)!=0;i++){
		*(re_str+(len-1)-i)=*(str+i);
	}
	*(re_str+(len))='\0';
	return re_str;
	
} 
