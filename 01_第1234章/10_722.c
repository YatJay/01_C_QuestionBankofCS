/*�Ӽ�������һ���ڣ�������֮���ԡ�-���ָ�������ͬ������ʽ���ԡ�/�� ���ָ��������*/

#include <stdio.h>
int main(void)
{
    int year,month,day;
    printf("Please input a date:(split them by '-')\n");
    scanf("%d-%d-%d",&year,&month,&day);
    printf("The date is %d/%d/%d\n",year,month,day);
    
    return 0;
}
