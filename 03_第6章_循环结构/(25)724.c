/*�Ӽ������� 1 ~ 9 ֮���һ������������������������Ӧ�������ǳ˷��ھ���
Ҫ��������ռ 3 ����ȣ�������롣*/
#include <stdio.h>
int main(void)
{
    int n,i,j;
    printf("Please input an integer between 0 and 9: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++){
    		printf("%d * %d = %-3d ",i,j,i*j);
		}
		printf("\n");
	}
    
    return 0;
}
