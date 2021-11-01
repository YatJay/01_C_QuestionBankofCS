/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如 6 = 1 + 2 + 3。
	从键盘输入一个正整数（约定该数 ≤ 32767、此时因子数 ≤ 100），找出该数以内的所有完数及其因子。*/

#include <stdio.h>

int iswanshu(int num);
int main(void)
{
    int num,factor[100],i,j;
    printf("Please input the number:");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    	if(iswanshu(i)==1){
    		printf("%5d is a wanshu:",i);
    		for(j=1;j<=i/2;j++){
    			if(i%j==0) printf("%5d",j);
			}
			puts("\n");
		}
	}
    return 0;
}

int iswanshu(int num){
	int i,sumfactor=0,flag=0;
	for(i=1;i<=num/2;i++){
		if(num%i==0){
			sumfactor+=i;
		}
	}
	if(sumfactor==num){
		flag=1;
	}
	return flag;
}
