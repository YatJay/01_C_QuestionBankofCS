/*从键盘读入两个整数 iBegin 和 iCount，要求输出 ≥ iBegin 的 iCount 个整数*/

/*
考查循环的边界控制 
*/
#include <stdio.h>
int main(void)
{
    int begin,count,i;
    printf("Please input a integer and a counter: ");
    scanf("%d %d",&begin,&count);
    printf("\nResult:");
    for(i=begin;i<(begin+count);i++){
    	printf(" %d",i);
	}
    
    return 0;
}
