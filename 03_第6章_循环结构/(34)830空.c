/*�� 1 + 2 + 3 + �� + n �� m ʱ����� n ֵ���� sum��sum = 1 + 2 + 3 + �� + n�������� m �Ӽ������롣
ע�� ����ʹ�ýⷽ�̡���ƽ����������*/
#include <stdio.h>
int main(void)
{
    int m,sum=0,i; 
    printf("Please input m: ");
    scanf("%d",&m);
    
    for(i=1;sum<=m;i++){
    	sum+=i;
	}
	printf("maxium n = %d , sum = %d\n",i-1,sum-i);
    return 0;
}
