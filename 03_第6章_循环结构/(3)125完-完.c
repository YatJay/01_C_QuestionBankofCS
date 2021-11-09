/*从键盘读入两个字符 cBegin 和 cEnd，要求输出 ≤ cBegin 且 ≥ cEnd 的所有字符。*/
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
