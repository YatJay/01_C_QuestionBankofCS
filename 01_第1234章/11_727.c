/*输入两个整数，输出这两个整数的和*/
#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("please input data: ");
    scanf("%d%d", &num1, &num2);
    printf("\nResult: %2d + %2d = %2d\n", num1, num2, num1 + num2);//使用%2d控制输出的宽度为2，这是题目所给图示的要求 

    return 0;
}
