/*现有两个一维数组（各含 5 个整型元素）设为 A、 B，从键盘分别输入数据给这两个数组。
计算 A 数组正序位置与 B 数组逆序对应位置积的和*/

#include <stdio.h>
int main(void)
{
    int a[5],b[5],i,sum=0;
    printf("Input array A: ");
    for(i=0;i<5;i++){
    	scanf("%d",&a[i]);
	}
    
    printf("Input array B: ");
    for(i=0;i<5;i++){
    	scanf("%d",&b[i]);
	}
    
    for(i=0;i<5;i++){
    	sum+=a[i]*b[4-i];
	}
	
	printf("sum=%d.",sum);
    return 0;
}
