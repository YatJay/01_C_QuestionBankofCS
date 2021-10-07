/*从键盘上输入一个四位整数，计算各个位上的数字之和*/

/*
分析：对于一个四位整数
对10取余得到个位数字；
除以10抹去个位数字，再对10取余得到十位数字； 
除以100抹去个位和十位数字，再对10取余得到百位数字；
除以1000抹去个位十位百位数字，得到千位数字； 
*/
#include <stdio.h>
int main(void)
{
    int num,ge,shi,bai,qian,sum;
    printf("Input a number with 4-digit: ");
    scanf("%d",&num);
    ge = num%10;
    shi = num/10%10;
    bai = num/100%10;
    qian = num/1000;
    sum = ge + shi + bai +qian;

    printf("\nge is %d\n",ge);
    printf("\nshi is %d\n",shi);
    printf("\nbai is %d\n",bai);
    printf("\nqian is %d\n",qian);
    printf("\nsum=%d\n",sum); 
    
    return 0;
}
