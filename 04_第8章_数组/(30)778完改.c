/*字符串“abcd”每个字符都向右移位，最右的则移动到第一个字符的位置，就变为“dabc”，这称为对串进行位移为 1 的轮换。
同理，“abcd”变为“cdab”则称为位移为 2 的轮换。
要求从键盘读入一个字符串 str（约定字符串中字符数 ≤ 80 字节，字符串中可以有空格）和需要位移的值 n（n > str 的长度时，循环位移），
输出对该字符串进行位移为 n 的轮换结果。*/

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
