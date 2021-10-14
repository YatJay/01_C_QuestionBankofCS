/*输出 m 和 n 之间的回文素数， m 和 n 从键盘读入（假定满足 5 ≤ m ≤ n ≤ 100000），回文是指正向与反向的字符都一样，例如 1、 11、 101、 131 等。*/

#include <stdio.h>

int isPrime(int num);
int isHuiwen(int num);

int main(void)
{
    int m,n,i;
	do{
    	printf("Input m & n : ");
    	scanf("%d %d",&m,&n);
	}while(m<5||n>100000||m>n);
	
	for(i=m;i<=n;i++){
		if(isPrime(i)==1&&isHuiwen(i)==1){
			printf("%d ",i);
		}
	}
    
    return 0;
}

int isPrime(int num){
	int i,flag=1;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}

int isHuiwen(int num){
	int temp,rev=0,org,flag=0;  //记得rev赋初值为0，否则累加过程中结果不对 
	org=num;
	while(num!=0){
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	
	if(rev==org){
		flag=1;
	}
	
	return flag;
}
