/*利用数组，求斐波拉契数列的前 n（约定 3 ≤ n ≤ 20）项并输出到屏幕上（数和数之间用水平制表符 '\t'隔开），
	斐波拉契公式为： 
	f(1) = 1， 
	f(2) = 1， 
	f(n) = f(n - 1) + f(n - 2)（n ≥ 3）。*/
	
#include <stdio.h>

int  Fibozina(int n);

int main(void)
{
	int n,result[20],i;
    do{
    	printf("input a data(3--20): ");;
    	scanf("%d",&n);
	}while(n<3||n>20);
    
    for(i=0;i<n;i++){
    	result[i]=Fibozina(i+1);  //菲波齐纳数列从1开始计，1~n共n个结果，存放到 result[0]~result[n-1] 中 
	}
	
	for(i=0;i<n;i++){
		printf("%d\t",result[i]);
	}
	   
    return 0;
}
int Fibozina(int n){
	int res;
	if(n==1) res=1;
	else if(n==2) res=1;
	else{
		res=Fibozina(n-1) + Fibozina(n-2);
	}
	return res;
}
