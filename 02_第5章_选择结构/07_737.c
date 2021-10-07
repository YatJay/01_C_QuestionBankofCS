/*从键盘输入 3 个整数，输出绝对值最大的数*/
#include <stdio.h>
#include <math.h>
int main(void){
    int a0,b0,c0,a,b,c,max;
    printf("Please input 3 integer:");
    scanf("%d %d %d",&a0,&b0,&c0);
    a=abs(a0);
    b=abs(b0);
    c=abs(c0);
    
    if(a>=b&&a>=c) max = a0;
    if(b>=c&&b>=a) max = b0;
    if(c>=b&&c>=a) max = c0;
    printf("The number with maxium absolute value is %d",max);
	
    return 0;
}
