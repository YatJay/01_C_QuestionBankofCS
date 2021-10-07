/*用 scanf 输入 10 个整数（采用 int 数据类型），计算所有正数的和、负数的和以及 10 个数的和。*/

#include <stdio.h>
int main(void)
{
    int a[10],i,positive=0,negative=0,sum=0;
	printf("Please input 10 numbers: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
    
    for(i=0;i<10;i++){
    	if(a[i]>=0) positive+=a[i];
    	else negative+=a[i];
	}
	sum=positive+negative;
	
	printf("sum of positive number is %d,sum of negative number is %d,sum of all the number is %d",positive,negative,sum);
    return 0;
}
