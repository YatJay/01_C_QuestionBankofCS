/*从键盘输入 3 个可带空格的字符串（约定：字符数 ≤ 127 字节），输出最大的字符串。*/

/*
1.strcmp()
strcmp() 用来比较字符串（区分大小写），其原型为：int strcmp(const char *s1, const char *s2);
【参数】s1, s2 为需要比较的两个字符串。
	字符串大小的比较是以ASCII 码表上的顺序来决定，此顺序亦为字符的值。
	strcmp()首先将s1 第一个字符值减去s2 第一个字符值，若差值为0 则再继续比较下个字符，若差值不为0 则将差值返回。
	例如字符串"Ac"和"ba"比较则会返回字符"A"(65)和'b'(98)的差值(－33)。
【返回值】若参数s1 和s2 字符串相同则返回0。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。
2.strcpy()
定义函数：char *strcpy(char *dest, const char *src);
函数说明：strcpy()会将参数src 字符串拷贝至参数dest 所指的地址。
返回值：返回参数dest 的字符串起始地址。

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
    printf("\n最大字符串是： %s\n", strmax);
    return 0;
}
