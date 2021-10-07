/*从键盘读入两个整数 iBegin 和 iCount，要求输出 ≤ iBegin 的 iCount 个整数*/

/*
同上一题一样注意循环边界的控制，使符合题目要求 
*/
#include <stdio.h>
int main(void)
{
    int begin,count,i;
    printf("Please input a integer and a counter: ");
    scanf("%d %d",&begin,&count);
    printf("\nResult:");
    for(i=begin;i>(begin-count);i--){
    	printf(" %d",i);
	}
    
    return 0;
}
