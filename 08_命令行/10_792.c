/*������������������ַ�������С�����˳������������
ע�����
	1. �����и�ʽΪ�� P792 str1 str2 str3���������и�ʽ����ȷ������������Ϊ 4��ʱ��Ӧ����
	2. ����ķ���ֵ������ main() ���� return ��ֵ�ͳ���ʹ�� exit() ��ֹ����ʱ���ص�ֵ��Ҳ���˳����룩
�涨Ϊ��
	a) �������н���ʱ������ 0��
	b) �����и�ʽ���ԣ����� 1��*/

/*
1.strcmp()�Ƚ��ַ��������ִ�Сд������ԭ��Ϊ��
    ��ԭ�͡�int strcmp(const char *s1, const char *s2);
	��������s1, s2 Ϊ��Ҫ�Ƚϵ������ַ�����
		�ַ�����С�ıȽ�����ASCII ����ϵ�˳������������˳����Ϊ�ַ���ֵ��
		strcmp()���Ƚ�s1 ��һ���ַ�ֵ��ȥs2 ��һ���ַ�ֵ������ֵΪ0 ���ټ����Ƚ��¸��ַ�������ֵ��Ϊ0 �򽫲�ֵ���ء�
		�����ַ���"Ac"��"ba"�Ƚ���᷵���ַ�"A"(65)��'b'(98)�Ĳ�ֵ(��33)��
	������ֵ��������s1 ��s2 �ַ�����ͬ�򷵻�0��s1 ������s2 �򷵻ش���0 ��ֵ��s1 ��С��s2 �򷵻�С��0 ��ֵ��
2.�����ַ�������С�����˳�������㷨
 	 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    char *Tmp;
    int i,j;
	if(argc!=4){
		printf("Input error.\n");
		printf("Usage:10_792 str1 str2 str3\n");
		exit(0);
	}
    
    //�����ַ�������С�����˳�������㷨
	if (strcmp(argv[1], argv[2])>0){
		Tmp=argv[1], argv[1]=argv[2], argv[2]=Tmp;
	}
	if (strcmp(argv[1], argv[3])>0){
		Tmp=argv[1], argv[1]=argv[3], argv[3]=Tmp;
	}
	if (strcmp(argv[2], argv[3])>0){
		Tmp=argv[2], argv[2]=argv[3], argv[3]=Tmp;
	}
	
	printf("    output: %s   %s   %s\n", argv[1], argv[2], argv[3]);
    return 0;
}
