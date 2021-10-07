/*从键盘输入一日期，年月日之间以“-”分隔，并以同样的形式但以“/” 作分隔符输出。*/

#include <stdio.h>
int main(void)
{
    int year,month,day;
    printf("Please input a date:(split them by '-')\n");
    scanf("%d-%d-%d",&year,&month,&day);
    printf("The date is %d/%d/%d\n",year,month,day);
    
    return 0;
}
