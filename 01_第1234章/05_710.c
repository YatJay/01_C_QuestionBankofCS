/*输入一个小写英文字母，首先输出它及其 ASCII 码，然后输出其对应的大写字母及其 ASCII 码。*/

/*
分析：
本题设计考查知识点：
1.使用getchar()接收输入的函数
2.ASCII码表中大写字母和小写字母编号相差为32，其中小写字母编号更大更加靠后
3.字符变量之间的相减就是对应的ASCII对应相减。
4.printf()输出时使用%c占位符输出字符变量，使用%d占位符输出一个字符变量则输出其对应的ASCII码

另附getchar()函数细节：
【函数原型】int getchar(void);
【参数】该函数没有参数。
【返回值】函数的返回值为用户输入的第一个字符的ASCII码，若出错返回-1，且将用户输入的字符回显到屏幕。
如果用户在按回车键之前输入了不只一个字符，其他字符会保留在键盘缓冲区中，等待后续getchar()调用读取。
也就是说，后续的getchar()调用不会等待用户按键，而是直接读取缓冲区中的字符，直到缓冲区的字符读取完毕后，才等待用户按键。
*/

#include <stdio.h>
int main(void)
{
    char small, cap;
    
    printf("Input a lowercase letter: ");
    small = getchar();  //使用getchar接收一个字符
    cap = small - 32;  //根据ASCII码表小写字母编号更大，减去32得到其对应大写字母
    printf("\n%c(%d)\n%c(%d)\n", small, small, cap, cap);
    
    return 0;
}