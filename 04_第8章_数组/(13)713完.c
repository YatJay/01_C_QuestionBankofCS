/*�� scanf() ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��졣 
�� 3 �� 5 ��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ��� 5 �켴����ĵڼ��죬��������������������·� �� 3 ʱ�迼�Ƕ��һ�졣
ע���ж�����Ƿ�Ϊ����ķ����� Ϊ 400 �ı���Ϊ���꣬�� 2000 �ꣻ���� 100 �ı��������� 4 �ı�����Ϊ���꣬�� 1996 ��*/

/*
�޸İ汾����˰� 
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
