/*�Ӽ��̶���һ���ַ� cBegin ��һ���� iCount��Ҫ����� �� cBegin �� iCount ���ַ���*/

/*
ע��ѭ���߽���ƣ�ʹ������ĿҪ�� 
*/
#include <stdio.h>
int main(void)
{
    char begin;
	int count,i;
	printf("Please input the begin character & count: ");
	scanf("%c %d",&begin,&count);
	for(i=count;i>=0;i--){
		printf("%c ",begin-i);
	}
    
    return 0;
}
