/*��������һά���飨���� 5 ������Ԫ�أ���Ϊ A�� B���Ӽ��̷ֱ��������ݸ����������顣
���� A ��������λ���� B ���������Ӧλ�û��ĺ�*/

#include <stdio.h>
int main(void)
{
    int a[5],b[5],i,sum=0;
    printf("Input array A: ");
    for(i=0;i<5;i++){
    	scanf("%d",&a[i]);
	}
    
    printf("Input array B: ");
    for(i=0;i<5;i++){
    	scanf("%d",&b[i]);
	}
    
    for(i=0;i<5;i++){
    	sum+=a[i]*b[4-i];
	}
	
	printf("sum=%d.",sum);
    return 0;
}
