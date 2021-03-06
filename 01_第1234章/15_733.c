/*从键盘读入一个任意字符，输出该字符 ASCII 的十六进制值。*/

/*
一、scanf();基本格式就是scanf(“%d,%c”,&a,&b);输入的数量可以继续扩充，能够将键盘输入以不同格式保存在变量里，功能强大。
    
    格式：scanf(“%d,%c”,&a,&b)

注意点：

1、不要忘了加“&”，这个取地址符很重要，表明数据要放到这个地址去，有人经常丢；

2、scanf(),判断输入结束的标志是空格和回车，所以输入字符串时，若中间有空格，空格后面的字符输入不进去，因为scanf已经停止输入了；

3、不要在scanf()中加入一些杂七杂八的格式字符，比如scanf("a= %d"，&a)；"a="就是自己给自己找麻烦，输入者谁会知道你要求输入“a=”？

二、gets()当你的字符串中有空格时不能使用scanf()，gets(char *string);就可以解决这个问题
    原型：char *gets(char *string);
    gets()函数从流中读取字符串，直到出现换行符或读到文件尾为止，最后加上NULL作为字符串结束。所读取的字符串暂存在给定的参数string中。

注意点：

1、gets()一次只能输入一个字符串，不像scanf()那样连续给好几个变量赋值；

2、主要用在字符串的输入上，其它类型不考虑

三、getchar(),得到一个字符，当你只想让用户输入一个字符时，可以考虑用它，它只接受一个字符，其余不要，比如让用户判断yes or no 时，你只想让用户输入Y 或者N时。
   
   格式：ch = getchar()

注意点

1、只接受一个字符

2、数据格式仅为字符，数字也会被当做字符。

*/
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Input a character: ");
    scanf("%c",&ch);//或用ch=getchar()
    printf("Ascii(%c) is 0x%0x\n",ch,ch);
    
    return 0;
}
