/*从键盘读入两个字符 cBegin 和 cEnd，要求输出 ≥ cBegin 且 ≤ cEnd 的所有字符。*/

/*
细节：
1.作为计数器需要用int定义
2.接收一个字符其实更适合使用getchar()函数
3.int类型变量可以和字符型进行比较，比较时比较其ASCII码 

char类型与其int本质：
字符就是整数
字符和整数没有本质的区别。可以给 char变量一个字符，也可以给它一个整数；
反过来，可以给 int变量一个整数，也可以给它一个字符。

char 变量在内存中存储的是字符对应的 ASCII 码值。
如果以 %c 输出，会根据 ASCII码表转换成对应的字符，如果以 %d 输出，那么还是整数。

int 变量在内存中存储的是整数本身，如果以 %c 输出时，也会根据 ASCII码表转换成对应的字符。

也就是说，ASCII 码表将整数和字符关联起来了。

char类型占内存一个字节，signed char取值范围是-128-127，unsigned char取值范围是0-255。

如果整数大于255，那么整数还是字符吗？

描述再准确一些，在char的取值范围内（0-255），字符和整数没有本质区别。

字符肯定是整数，0-255范围内的整数是字符，大于255的整数不是字符。

getchar()函数
原型如下：int getchar(void);
【参数】该函数没有参数。
【返回值】函数的返回值为用户输入的第一个字符的ASCII码，若出错返回-1，且将用户输入的字符回显到屏幕。
如果用户在按回车键之前输入了不只一个字符，其他字符会保留在键盘缓冲区中，等待后续getchar()调用读取。
也就是说，后续的getchat()调用不会等待用户按键，而是直接读取缓冲区中的字符，直到缓冲区的字符读取完毕后，才等待用户按键。

*/
#include <stdio.h>
int main(void)
{
    char begin,end;
	int i;  //作为计数器需要用int定义 
    printf("printf input two characters: ");
    //scanf("%c %c",&begin,&end); //每次接收一个字符其实更适合使用getchar()函数 
    begin = getchar();
    end = getchar();
    printf("%d\n",begin);   
	printf("%d\n",end); 

    for(i=begin;i<=end;i++){  //int类型变量可以和字符型进行比较，比较时比较其ASCII码 
    	printf("%c\t",i);
	}
    
    return 0;
}
