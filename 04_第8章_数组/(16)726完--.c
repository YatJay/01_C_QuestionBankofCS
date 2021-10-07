/*从键盘上读入一行字符，在屏幕上输出该行字符的长度及内容（先输出长度，后输出内容）。
注意：
1. 以回车表示行结束且回车不计入输入内容。若读入过程中发生错误或遇到文件结束，则也表示行输
入结束。
2. 若用户输入时输入了很多字符，则仅读入前 100 个字符。
3. 不能使用库函数 gets()、 fgets()、 strlen() 或使用同名的变量、函数、单词。*/

#include <stdio.h>
int main(void)
{
    int ch, i, len = 0;
    char str[101];
    printf("input a string: ");
    for (i = 0; i < 101; i++)
    {
        ch = getchar();
        if (ch == EOF || ch == '\n' || i == 100)
        {
            break;
        }
        else
        {
            str[i] = ch;
            len++;
        }
    }
    str[i] = '\0';
    printf("\nThe string lenth is: %d", len);
    printf("\nThe string is: %s\n", str);

    return 0;
}
