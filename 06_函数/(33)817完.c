/*����Ĺ����ǣ��Ӽ�������һ�пɴ��ո���ַ�����Լ�����ַ��� �� 127 �ֽڣ���������������ַ���*/

#include<stdio.h>
#include<string.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void reverseString(char str[128]);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	reverseString(str);//______________________________  /* userCode(<50�ַ�): ���ú������ַ���str������ */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void reverseString(char str0[128]){
	int i,j,len=strlen(str0);
	char str1[128];
	strcpy(str1,str0);
	for(i=len-1,j=0;i>=0;i--){
		str0[j]=str1[i];
		j++;
	}
	str0[j]='\0';
} 
