/*从键盘读入两个整数 iBegin 和 iCount，要求输出 ≤ iBegin 的 iCount 个整数（后一数为前一数减 7）。*/
/*
for循环中i++的含义：
 i++表示i=i+1,所以在修改步进为其他类型时，需要写成i=i+k,如本题所示的 i=i-7
同上一题一样注意循环边界的控制，使符合题目要求 
*/
#include <stdio.h>
int main(void)
{
    int begin,count,i;
    printf("Please input a integer and a counter: ");
    scanf("%d %d",&begin,&count);
    printf("\nResult:");
    for(i=begin;i>(begin-count*7);i=i-7){
    	printf(" %d",i);
	}
    return 0;
}
