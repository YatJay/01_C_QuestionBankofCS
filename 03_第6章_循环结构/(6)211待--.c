/*根据输入的 n 在屏幕上显示对应的以“#”组成的菱形图案*/
#include <stdio.h>
int main(void)
{
    int n,i,j;
	printf("Please input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("#");
		}
		printf("\n");
	} 
    
    return 0;
}
