/*�ַ�����abcd��ÿ���ַ���������λ�����ҵ����ƶ�����һ���ַ���λ�ã��ͱ�Ϊ��dabc�������Ϊ�Դ�����λ��Ϊ 1 ���ֻ���
ͬ����abcd����Ϊ��cdab�����Ϊλ��Ϊ 2 ���ֻ���
Ҫ��Ӽ��̶���һ���ַ��� str��Լ���ַ������ַ��� �� 80 �ֽڣ��ַ����п����пո񣩺���Ҫλ�Ƶ�ֵ n��n > str �ĳ���ʱ��ѭ��λ�ƣ���
����Ը��ַ�������λ��Ϊ n ���ֻ������*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[81];
    int num, len, i;
    printf("Please input the string: ");
    gets(str);
    len = strlen(str);
    printf("Please input n: ");
    scanf("%d", &num);
    printf("\nThe result is: ");
    if (num <= len)
    {
        for (i = len - num; i < len; i++)
        {
            printf("%c", str[i]);
        }
        for (i = 0; i < len - num; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        for (i = len - num % len; i < len; i++)
        {
            printf("%c", str[i]);
        }
        for (i = 0; i < len - num % len; i++)
        {
            printf("%c", str[i]);
        }
    }
    putchar('\n');
    return 0;
