/*����Ĺ����ǣ��Ӽ�������һ�пɴ��ո���ַ�����Լ�����ַ��� �� 127 �ֽڣ���������������ַ���*/

#include<stdio.h>
#include<string.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void reverseString(char str[]);

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
void reverseString(char str[]){  //һά�����βο��Բ��������С 
	int len, i, j, tmp;
	len = strlen(str);
	for (i = 0, j = len - 1; i < j; i++, j--){  //���ַ��������i=0βj=len-1�ֱ�ʼ������ѭ��������i<j 
		tmp = str[i];							//��ʱ����������ʱ��� 
		str[i] = str[j];
		str[j] = tmp;
	}
} 
