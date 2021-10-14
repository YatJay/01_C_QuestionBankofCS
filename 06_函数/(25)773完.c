/*计算两个日期之间的天数。
注：判断年份是否为闰年的方法——为 400 的倍数为闰年，如 2000 年；若非 100 的倍数，而是 4 的倍数，为闰年，如 1996 年。*/

#include <stdio.h>

int countDays(int year,int month,int day);

int main(void)
{
    int year1,month1,day1;
    int year2,month2,day2;
    int gap;
    printf("from the date:****/**/**\n");
    scanf("%d/%d/%d",&year1,&month1,&day1);
    printf("to the date:****/**/**\n");
    scanf("%d/%d/%d",&year2,&month2,&day2);
    gap=countDays(year2,month2,day2)-countDays(year1,month1,day1);
    printf("gap=%d",gap);
    return 0;
}

int countDays(int year,int month,int day){
	int yearDays=0,monthDays=0,sumDays=0;
	int i;
	for(i=1;i<=year-1;i++){
		if(i%400==0||(i%100!=0&&i%4==0)){
			yearDays+=366;
		}
		else{
			yearDays+=365;
		}
	}
	for(i=1;i<=month-1;i++){
		if(i==2){
			if(year%400==0||(year%100!=0&&year%4==0)) monthDays+=29;
			else monthDays+=28;
		}
		else if(i==4||i==6||i==9||i==11){
			monthDays+=30;
		}
		else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			monthDays+=31;
		}
	}
	sumDays=yearDays+monthDays+day;
	return sumDays;
}
