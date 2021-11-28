/*输入两个正整数 m 和 n，求其最大公约数和最小公倍数。
注：最大公约数也称最大公因子，指某几个整数共有因子中最大的一个；
两个整数公有的倍数称为它们的公倍数，其中最小的一个正整数称为它们两个的最小公倍数。*/
#include <stdio.h>
int main(void)
{
    int m,n,temp,i;
    int maxyue,minbei;
    printf("Please input 2 number: ");
    scanf("%d%d",&m,&n);
    if(m>m){
    	temp=m;
    	m=n;
    	n=temp;
	}
	for(i=1;i<=m;i++){
		if(m%i==0&&n%i==0){
			maxyue=i;
		}
	}
	minbei=m*n/maxyue;
	printf("\nThe greatest common divisor is %d\nThe least common multiple is %d\n",maxyue,minbei);
    
    return 0;
}
