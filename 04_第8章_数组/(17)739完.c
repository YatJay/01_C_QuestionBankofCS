/*�Ӽ����������������ڣ�������������ǹ�Ԫ���������ĵڼ��졣
ע���ж�����Ƿ�Ϊ����ķ�������Ϊ 400 �ı���Ϊ���꣬�� 2000 �ꣻ���� 100 �ı��������� 4 �ı�����Ϊ���꣬�� 1996 �ꡣ*/


/*
ϸ�ڣ���Ԫ���������ǹ�Ԫ1�꣬��û�С���Ԫ0�ꡱ ����˼���ǰn-1�������֮�ͣ�ѭ����i=1��ʼ���� 
*/
#include <stdio.h>
int main(void)
{
    int year,month,day,days=0,preDays,pingCount=0,runCount=0,i,sum;
    int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31},run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    printf("Please input year-month-day: ");
    scanf("%d-%d-%d",&year,&month,&day);
    for(i=1;i<year;i++){  //��Ԫ���������ǹ�Ԫ1�꣬��û�С���Ԫ0�ꡱ 
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
