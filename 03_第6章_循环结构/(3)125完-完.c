/*�Ӽ��̶��������ַ� cBegin �� cEnd��Ҫ����� �� cBegin �� �� cEnd �������ַ���*/
#include <stdio.h>
int main(void)
{
    char begin,end;
	int i;
	printf("Please input two characters: ");
	begin=getchar();
	end=getchar();
	for(i=begin;i>=end;i--){
		printf("%c ",i);
	}   
    return 0;
}
