/*�Ӽ��̶����������� iBegin �� iCount��Ҫ����� �� iBegin �� iCount ������*/

/*
����ѭ���ı߽���� 
*/
#include <stdio.h>
int main(void)
{
    int begin,count,i;
    printf("Please input a integer and a counter: ");
    scanf("%d %d",&begin,&count);
    printf("\nResult:");
    for(i=begin;i<(begin+count);i++){
    	printf(" %d",i);
	}
    
    return 0;
}
