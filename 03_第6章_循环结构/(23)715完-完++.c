/*如果一个正整数恰好等于它的所有因子（包括 1 但不包括自身）之和，则称之为“完数”，
例如 6 的因子是 1、 2、 3，且 6 = 1 + 2 + 3，因此 6 是完数。
编写程序，输入数据范围（约定数的上限 ≤ 32767、此时因子数 ≤ 100），输出该范围之内的所有完数及其个数。*/
#include "stdio.h"
int main(void)
{
    
	int i,j,sum,count=0,begin,end;
	printf("Please input two integers(≤ 32767) to determine the range:");
	scanf("%d %d",&begin,&end);
    for(i=begin;i<=end;i++){
    	//本循环判断j是否为i的因子 ： 若是因子则加和 
		for(j=1;j<i;j++){
    		if(i%j==0){
    			sum+=j;
			}
		}
		//本次判断因子加和是否和原数相等 ： 若相等则输出并计数器+1 
		if(sum==i){
			printf("wanshu is %d\n",i);
			count++;
		}
		//每判断完成一个数的因子加和情况，sum清零以备下一个数字 
		sum=0;
	}
	//整体循环走完以后，输出计数器的结果 
	printf("count = %d\n",count);
    
    return 0;
}
