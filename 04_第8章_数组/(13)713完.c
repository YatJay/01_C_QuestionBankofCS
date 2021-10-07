/*用 scanf() 输入某年某月某日，判断这一天是这一年的第几天。 
以 3 月 5 日为例，应该先把前两个月的加起来，然后再加上 5 天即本年的第几天，特殊情况，闰年且输入月份 ≥ 3 时需考虑多加一天。
注：判断年份是否为闰年的方法： 为 400 的倍数为闰年，如 2000 年；若非 100 的倍数，而是 4 的倍数，为闰年，如 1996 年*/

/*
修改版本不如此版 
*/
#include <stdio.h>
int main(void)
{
    int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31,},run[12]={31,29,31,30,31,30,31,31,30,31,30,31,};
    int year,month,day,days=0,i;
    printf("Please input the year-month-day:");
    scanf("%d-%d-%d",&year,&month,&day);
    if(year%400==0||year%100!=0&&year%4==0){
    	for(i=0;i<=month-1-1;i++){
    		days+=run[i];
		}
		days+=day;
	}
	else{
		for(i=0;i<=month-1-1;i++){
    		days+=ping[i];
		}
		days+=day;
	}
	
	printf("It is the %dth day.",days);
    
    
    return 0;
}
