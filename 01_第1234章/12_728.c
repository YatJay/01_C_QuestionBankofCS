/*已知某产品单价是 30，输入其数量是 num，输出其总价。*/
/*
细节：这里使用了宏定义PRICE
*/
#include <stdio.h>
#define PRICE 30
int main(void)
{
    int num;
    printf("please input num: ");
    scanf("%d", &num);
    printf("\ntotal=%d\n", num * PRICE);

    return 0;
}