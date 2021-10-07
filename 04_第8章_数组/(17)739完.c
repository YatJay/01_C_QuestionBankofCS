/*从键盘输入年月日日期，计算出该日期是公元纪年以来的第几天。
注：判断年份是否为闰年的方法——为 400 的倍数为闰年，如 2000 年；若非 100 的倍数，而是 4 的倍数，为闰年，如 1996 年。*/


/*
细节：公元纪年的起点是公元1年，而没有“公元0年” ，因此计算前n-1年的天数之和，循环从i=1开始计数 
*/
#include <stdio.h>
int main(void)
{
    int year,month,day,days=0,preDays,pingCount=0,runCount=0,i,sum;
    int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31},run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    printf("Please input year-month-day: ");
    scanf("%d-%d-%d",&year,&month,&day);
    for(i=1;i<year;i++){  //公元纪年的起点是公元1年，而没有“公元0年” 
    	if(i%400==0||i%100!=0&&i%4==0){
    		runCount++;
		}
		else{
			pingCount++;
		}
	}
	preDays=(runCount*366)+(pingCount*365);
	
	if(year%400==0||year%100!=0&&year%4==0){
		for(i=0;i<month-1;i++){
			days+=run[i];
		}
	}
	else{
		for(i=0;i<month-1;i++){
			days+=ping[i];
		}
	}
    sum=days+preDays+day;
    
    printf("%d-%d-%d is the %dth days from AD.\n",year,month,day,sum);
    return 0;
}
