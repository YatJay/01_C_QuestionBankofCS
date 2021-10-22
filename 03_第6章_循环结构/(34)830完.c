/*求 1 + 2 + 3 + … + n ≤ m 时的最大 n 值及和 sum（sum = 1 + 2 + 3 + … + n），其中 m 从键盘输入。
注： 不得使用解方程、算平方根方法。*/
#include <stdio.h>
int main(void)
{
    int m,sum=0,i; 
    printf("Please input m: ");
    scanf("%d",&m);
    
    for(i=1;;i++){
    	sum+=i;
    	if(sum>m){
    		break;
		} 
	}
	printf("maxium n = %d , sum = %d\n",i-1,sum-i);
    return 0;
}
