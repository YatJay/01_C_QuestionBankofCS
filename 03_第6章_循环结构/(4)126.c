/*�Ӽ��̶���һ���ַ� cBegin ��һ���� iCount��Ҫ����� �� cBegin �� iCount ���ַ���*/
#include <stdio.h>
int main(void)
{
    char begin;
	int count,i;
	printf("Please input the begin character & count: ");
	scanf("%c %d",&begin,&count);
	for(i=0;i<count;i++){
		printf("%c ",begin+i);
	}
    
    return 0;
}
