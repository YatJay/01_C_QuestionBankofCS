/*
已知某银行整存整取存款不同期限的年息利率分别为： 
3.15% 期限一年， 3.63% 期限二年， 4.02% 期限三年， 4.69% 期限五年， 5.36% 期限八年。
从键盘上输入存钱的本金（以元为单位， 必须定义为 int 且应考虑金额很大的情况）和存款期限（只考虑 1、 2、 3、 5、 8），
求到期时能从银行得到的利息（以元为单位，应考虑有小数，不计复利）。*/

#include <stdio.h>
int main(void)
{
    long int capital;//题目要求考虑int很大情况，故使用long长整型 
    int term;
    float interest;
    
    printf("Please input the capital & term\n");
    scanf("%ld %d",&capital,&term);
    switch(term){//本题适合使用switch语句进行分流 ，注意break使用及时跳出switch 
    	case 1:
    		interest = capital*0.0315*1;
    		break;
    	case 2:
    		interest = capital*0.0363*2;
    		break;
    	case 3:
    		interest = capital*0.0402*3;
    		break;
    	case 5:
    		interest = capital*0.0469*5;
    		break;
    	case 8:
    		interest = capital*0.0536*8;
    		break;
    	default:
    		printf("Invalid term input.");
	}
	
	printf("Your interest is %.2f yuan\n",interest);
    
    return 0;
}
