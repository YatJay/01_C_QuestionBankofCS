/*从键盘读入一个字符串（约定：字符数 ≤ 127 字节），检查该字符串是否是回文。所谓回文即正向与反向的拼写都一样，例如“adgda” 。*/

/*
细节:
1. strlen()计算字符数组实际长度 (不包括\0)
2.数组从0开始计数，长度-1即是字符数组最后一个元素的下标
3.循环内做判断修改flag标志，出循环以后再根据flag变化情况判断输出结果 
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128];
    int len, i, j, flag = 0;
    printf("Please input string: ");
    gets(str);
    len = strlen(str);  //strlen()计算字符数组实际长度 (不包括\0)
    for (i = 0, j = len - 1; i <= j; i++, j--)  //数组从0开始计数，len-1即是字符数组最后一个元素的数组下标 
    {
        if (str[i] != str[j])  //若对称的位置上字符数组元素不同，说明不是回文，将flag置为1 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)  //若flag=0不变说明该字符数组是一个回文 
    {
        printf("\n%s is hui wen.\n", str);
    }
    else
    {
        printf("\n%s is not hui wen.\n", str);
    }
    return 0;
}
