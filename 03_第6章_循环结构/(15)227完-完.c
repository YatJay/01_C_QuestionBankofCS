/*从键盘读入两个整数 iBegin 和 iEnd，要求输出 ≤ iBegin 且 ≥ iEnd 的所有整数*/
#include <stdio.h>
int main(void)
{
    int begin,end,i;
    
	printf("Please input two integer: ");
    scanf("%d %d",&begin,&end);
    printf("\nResult:");
	for(i=begin;i>=end;i--){
		printf("%d\t",i);
	} 
    
    return 0;
}
