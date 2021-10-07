/*先从键盘读入 5 个整数，然后倒序输出这 5 个数。*/

/*
细节：
 scanf()接收输入时除了原模原样输入外，遇空格、回车、tab，认为一次输入结束
*/
#include <stdio.h>
int main(void)
{
    int a[5],i,j;
    printf("Please input 5 integers: ");
    for(i=0;i<=4;i++){
    	scanf("%d",&a[i]);  //scanf()接收输入时遇空格、回车、tab，认为一次输入结束。
	}
    for(j=4;j>=0;j--){
    	printf("%d",a[j]);
	}
    
    return 0;
}
