/*有一递推数列，满足 
	f(0) = 0， 
	f(1) = 1， 
	f(2) = 2， 
	f(n + 1) = 2f(n) + f(n - 1) f(n - 2)（n ≥ 2），编写程序求f(n) 的值（n 由键盘输入， 13 ≥ n ≥ 2）。*/

#include <stdio.h>

float fun(int n);

int main(void)
{
	int n;
	float result;
    do{
    	printf("Please input n (13 ≥ n ≥ 2): ");
    	scanf("%d",&n);
	}while(n<2||n>13);
	
    result=fun(n);
    printf("\nf(%d) = %.0f\n",n,result);
    return 0;
}

float fun(int n){
	float res;
	if(n==0) res=0;
	else if(n==1) res=1;
	else if(n==2) res=2;
	else{
		res=2*fun(n-1)+fun(n-2)*fun(n-3);  //递推得到f(n)的表达式，不能用 f(n+1)的表达式 
	}
	return res;
}

