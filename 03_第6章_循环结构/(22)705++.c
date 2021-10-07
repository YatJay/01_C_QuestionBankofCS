/*从键盘输入星期几的第一个字母（接收字符请用 getchar()），由程序判断是星期几，并显示其对应的英文单词，
如果第一个字母一样，则继续判断第二个字母。星期的第一个字母都为大写。
如果输入的字符不能构成星期的英文单词，则输出“data error”。
程序可重复判断，直至输入字母“Y”。*/
#include <stdio.h>
int main(void)
{
    char str[1000], ch;     //字符数组存储字符串  ch接收getchar()的返回值 
    int i, count = 0;  //循环内部计数器i  count统计数组内元素个数，每加入一个字符就自增1 
    printf("Please input the letter of someday: ");
/* 本for循环功能
1.用一个字符数组接收输入的字符串 
	每一轮循环，getchar()接收一个字符并赋值给ch
	判断ch若为Y或回车就跳出循环；否则将ch的值存到字符数组str[]中，并且对字符数组使用count计数，每存储一个值，count就+1 
2.getchar()函数获取当前控制台的输入，直到按回车键结束，并将其输出。
	函数的返回值为用户输入的第一个字符的ASCII码，若出错返回-1，且将用户输入的字符回显到屏幕。
	如果用户在按回车键之前输入了不只一个字符，其他字符会保留在键盘缓冲区中，等待后续getchar()调用读取。
	也就是说，后续的getchar()调用不会等待用户按键，而是直接读取缓冲区中的字符，直到缓冲区的字符读取完毕后，才等待用户按键。
*/
    for (i = 0; i < 1000; i++)
    {
        ch = getchar();
        if (ch == 'Y' || ch == '\n')
        {
            break;
        }
        else
        {
            str[i] = ch;
            count++;
        }
    }
/*本for循环 
1.for循环配合switch()语句检查输入字符串的首字母，若首字母重复则检查次字母，对字符数组中的元素，一个一个检查
2. 
 
*/
    for (i = 0; i < count; i++)
    {
        switch (str[i])
        {
        case 'M':
            printf("Monday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'T':
            if (str[i + 1] == 'u')
            {
                printf("Tuesday\n");
                i++;
            }
            else if (str[i + 1] == 'h')
            {
                printf("Thursday\n");
                i++;
            }
            else
            {
                printf("data error\n");
            }
            break;
        case 'S':
            if (str[i + 1] == 'a')
            {
                printf("Saturday\n");
                i++;
            }
            else if (str[i + 1] == 'u')
            {
                printf("Sunday\n");
                i++;
            }
            else
            {
                printf("data error\n");
            }
            break;
        default:
            printf("data error\n");
        }
    }
    return 0;
}
