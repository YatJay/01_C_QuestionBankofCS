/*输入整数 m，将所有大于 1 小于整数 m 的素数存入所指定的数组中（数组最多只存放 100 个素数，超过则提示“overflow”），输出素数的个数 n 及各素数    
	素数的输出格式为每个素数 5 列宽、右对齐、每行显示 15 个。若输入的 m ≤ 0，则提示“error”，程序终止。
注：素数（Prime Number），亦称质数，指在一个大于 1 的自然数中，除了 1 和此整数自身外，没法被其他自然数整除的数*/

#include <stdio.h>
int main(void)
{
    int a[100],n=0,i,j,m,flag=0;
    printf("Please input an integer: ");
	scanf("%d",&m);
	if(m<=0){
		printf("\nerror.");
	}
	else{
		for(i=2;i<m;i++){
    		flag=0;
	    	for(j=2;j<i;j++){  //注意：i=2不进入此循环 ，其flag=0 
	    		if(i%j==0){
	    			flag=1;
	    			break;
				}
			}
		
			if(flag==0){
				a[n]=i;
				n++;
			}
	}
	printf("n=%d\n",n);	
	if(n>=100){
		printf("overflow");
	}
	else{
		for(i=0;i<=n-1;i++){  //注意此处循环条件确定：数组下标i从0开始计数，数组长度计数器n从1开始计数，二者相差1，所以第n个数组元素对应的数组下标是n-1 
			if((i+1)%15==0){
				printf("%5d\n",a[i]);
			} 
			else{
				printf("%5d",a[i]);
			}
			
		}
	}
	}
    return 0;
}
