/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如 6 = 1 + 2 + 3。
	从键盘输入一个正整数（约定该数 ≤ 32767、此时因子数 ≤ 100），找出该数以内的所有完数及其因子。*/

#include <stdio.h>
int main(void)
{
    int num,factor[100],i,j,k,count=0,sum;
    printf("Please input the number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    	for(j=1,k=0;j<i;j++){
    		if(i%j==0){
    			factor[k]=j;
    			k++;
			}
		}
		for(j=0;j<=k-1;j++){
			sum+=factor[j];
		}
		if(sum==i){
			printf("%d is wanshu",i);
			for(j=0;j<=k-1;j++){
				printf("%d",factor[j]);
			}
		}
	}
	
    return 0;
}
