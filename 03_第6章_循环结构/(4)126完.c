/*从键盘读入一个字符 cBegin 和一个数 iCount，要求输出 ≥ cBegin 的 iCount 个字符。*/
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
