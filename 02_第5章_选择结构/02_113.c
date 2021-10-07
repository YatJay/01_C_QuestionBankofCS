/*
已知某银行整存整取存款不同期限的年息利率分别为： 
3.15% 期限一年， 3.63% 期限二年， 4.02% 期限三年， 4.69% 期限五年， 5.36% 期限八年。
从键盘上输入存钱的本金（以元为单位， 必须定义为 int 且应考虑金额很大的情况）和存款期限（只考虑 1、 2、 3、 5、 8），
求到期时能从银行得到的利息（以元为单位，应考虑有小数，不计复利）。*/

/*
本例实现了要求但是未考虑金额很大的情况，且没有使用switch 
*/
#include <stdio.h>
int main(void)
{
    int benjin,qixian;
    float lixi;
	printf("Please input benjin and qixian:\n");
	scanf("%d %d",&benjin,&qixian);
	if(qixian==1) lixi = benjin * 0.0315 * 1;
	if(qixian==2) lixi = benjin * 0.0363 * 2;
	if(qixian==3) lixi = benjin * 0.0402 * 3;
	if(qixian==5) lixi = benjin * 0.0469 * 5;
	if(qixian==8) lixi = benjin * 0.0536 * 8;
	
	printf("lixi = %.2f yuan\n",lixi);
	
    
    return 0;
}
