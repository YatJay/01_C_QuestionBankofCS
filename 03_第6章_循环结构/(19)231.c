/*�Ӽ��̶����������� iBegin �� iCount��Ҫ����� �� iBegin �� iCount ����������һ��Ϊǰһ���� 7����*/
/*
forѭ����i++�ĺ��壺
 i++��ʾi=i+1,�������޸Ĳ���Ϊ��������ʱ����Ҫд��i=i+k,�籾����ʾ�� i=i-7
ͬ��һ��һ��ע��ѭ���߽�Ŀ��ƣ�ʹ������ĿҪ�� 
*/
#include <stdio.h>
int main(void)
{
    int begin,count,i;
    printf("Please input a integer and a counter: ");
    scanf("%d %d",&begin,&count);
    printf("\nResult:");
    for(i=begin;i>(begin-count*7);i=i-7){
    	printf(" %d",i);
	}
    return 0;
}
