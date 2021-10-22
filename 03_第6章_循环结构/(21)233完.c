/*从键盘读入一个整数 Num，按从小到大的顺序依次输出所有满足条件的 3 位数：
该数各位数字之积加上该数十位数的平方再加上该数个位数的立方之和等于 Num。*/

#include <stdio.h>
int main(void)
{
    int num,i,ge,shi,bai,flag=0;
    printf("Please input the number: ");
    scanf("%d",&num);
    printf("\nResult:");
	for(i=100;i<=999;i++){
		ge = i%10;
		shi = i/10%10;
		bai = i/100;
		if(ge*shi*bai+shi*shi+ge*ge*ge==num){
			printf(" %d",i);
			flag=1;
		}
	}
	if(flag==0) printf("not found.\n");
    
    return 0;
}
