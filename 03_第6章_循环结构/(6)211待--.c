/*��������� n ����Ļ����ʾ��Ӧ���ԡ�#����ɵ�����ͼ��*/
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
