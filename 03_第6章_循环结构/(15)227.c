/*�Ӽ��̶����������� iBegin �� iEnd��Ҫ����� �� iBegin �� �� iEnd ����������*/
#include <stdio.h>
int main(void)
{
    int begin,end,i;
    
	printf("Please input two integer: ");
    scanf("%d %d",&begin,&end);
    printf("\nResult:");
	for(i=begin;i>=end;i--){
		printf("%d\t",i);
	} 
    
    return 0;
}
