/*从键盘输入 1 ~ 9 之间的一个数，根据输入的数，输出对应的下三角乘法口诀表。
要求积的输出占 3 个宽度，且左对齐。*/
#include <stdio.h>
int main(void)
{
    int n,i,j;
    printf("Please input an integer between 0 and 9: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++){
    		printf("%d * %d = %-3d ",i,j,i*j);
		}
		printf("\n");
	}
    
    return 0;
}
