/*�Ӽ��̶����������� iBegin �� iCount��Ҫ����� �� iBegin �� iCount ������*/

/*
ͬ��һ��һ��ע��ѭ���߽�Ŀ��ƣ�ʹ������ĿҪ�� 
*/
#include <stdio.h>
int main(void)
{
    int begin,count,i;
    printf("Please input a integer and a counter: ");
    scanf("%d %d",&begin,&count);
    printf("\nResult:");
    for(i=begin;i>(begin-count);i--){
    	printf(" %d",i);
	}
    
    return 0;
}
