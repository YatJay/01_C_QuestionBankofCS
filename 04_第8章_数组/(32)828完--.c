/*�Ӽ������� 3 ���ɴ��ո���ַ�����Լ�����ַ��� �� 127 �ֽڣ�����������ַ�����*/

/*
1.strcmp()
strcmp() �����Ƚ��ַ��������ִ�Сд������ԭ��Ϊ��int strcmp(const char *s1, const char *s2);
��������s1, s2 Ϊ��Ҫ�Ƚϵ������ַ�����
	�ַ�����С�ıȽ�����ASCII ����ϵ�˳������������˳����Ϊ�ַ���ֵ��
	strcmp()���Ƚ�s1 ��һ���ַ�ֵ��ȥs2 ��һ���ַ�ֵ������ֵΪ0 ���ټ����Ƚ��¸��ַ�������ֵ��Ϊ0 �򽫲�ֵ���ء�
	�����ַ���"Ac"��"ba"�Ƚ���᷵���ַ�"A"(65)��'b'(98)�Ĳ�ֵ(��33)��
������ֵ��������s1 ��s2 �ַ�����ͬ�򷵻�0��s1 ������s2 �򷵻ش���0 ��ֵ��s1 ��С��s2 �򷵻�С��0 ��ֵ��
2.strcpy()
���庯����char *strcpy(char *dest, const char *src);
����˵����strcpy()�Ὣ����src �ַ�������������dest ��ָ�ĵ�ַ��
����ֵ�����ز���dest ���ַ�����ʼ��ַ��

*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[128], str2[128], str3[128], strmax[128];
    printf("Please input the first string:\t");
    gets(str1);
    printf("Please input the second string:\t");
    gets(str2);
    printf("Please input the third string:\t");
    gets(str3);
    if (strcmp(str1, str2) > 0)
    {
        strcpy(strmax, str1);
    }
    else
    {
        strcpy(strmax, str2);
    }
    if (strcmp(str3, strmax) > 0)
    {
        strcpy(strmax, str3);
    }
    printf("\n����ַ����ǣ� %s\n", strmax);
    return 0;
}
