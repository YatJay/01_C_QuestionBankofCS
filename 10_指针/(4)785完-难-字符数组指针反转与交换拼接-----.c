/*����Ĺ����ǣ� 
	��������ַ��� s1�� s2�ֱ�
	�����Զ��庯�� myswap() ��ת��
	Ȼ������Զ��庯�� merge()�� s1�� s2 �����е�˳�򽻲�ϲ��� s3 �У� s1 �� s2 �й�����ʣ���ַ����� s3 ��β����
ע�������в���ʹ�ÿ⺯�� strrev() ��ʹ��ͬ���ı���������������*/

/*
1.��������ָ����뷵���������������ģ������ڲ������ָ���޷�����
	C ��֧���ڵ��ú���ʱ���ؾֲ������ĵ�ַ�����Ƕ���ֲ�����Ϊ static ������
	��Ϊ�ֲ������Ǵ洢���ڴ��ջ���ڣ����������ý����󣬾ֲ�������ռ���ڴ��ַ�㱻�ͷ��ˣ�
	��˵��亯��ִ����Ϻ󣬺����ڵı����㲻��ӵ���Ǹ��ڴ��ַ�����Բ��ܷ�����ָ�롣
	���ǽ����������Ϊ static ������static ������ֵ������ڴ��еľ�̬���������������ź���ִ�еĽ���������������ܷ������ַ��
2.ʹ��ָ���������Ԫ�ط�ת��һ���㷨
3.ʹ��ָ��������������˳�򽻲�ϲ���һ���㷨 

*/
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
	printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
char *myswap(char *str)
{   
	char *sp, *st, ch;

	sp = str;  //��¼�ַ������׵�ַ 
	st = str + strlen(str) - 1;  //��¼�ַ��������һ���ַ���ַ 
	while (sp <= st)
	{
		ch = *sp;  //spָ�������ǰ��λ�ý����û�Ϊ����βԪ�أ�ʹ��ch�ݴ� 
		*sp = *st;  //spָ�������ǰ��λ���û�Ϊ����βԪ�� 
		*st = ch;  //����βԪ�ػ���ch�ݴ������ǰ��λ��Ԫ�� 
		sp++;  //����ǰ��ָ����� 
		st--;  //������ָ��ǰ�� 
	}

	return str;  //��������ָ����뷵���������������ģ������ڲ������ָ���޷����أ��������ý����󣬾ֲ�������ռ�ڴ�ͱ��ͷ� 
}

char *merge(char *strA, char *strB, char *strC)
{
	char *tmp = strC;

	while (*strA || *strB){
		if (*strA)
		{
			*strC = *strA;
			strC++;
			strA++;
		}

		if (*strB)
		{
			*strC = *strB;
			strC++;
			strB++;
		}
	}
	*strC = '\0'; 

	return tmp;
}


