/*�� scanf ���� 10 ������������ int �������ͣ����������������ĺ͡������ĺ��Լ� 10 �����ĺ͡�*/

#include <stdio.h>
int main(void)
{
    int a[10],i,positive=0,negative=0,sum=0;
	printf("Please input 10 numbers: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
    
    for(i=0;i<10;i++){
    	if(a[i]>=0) positive+=a[i];
    	else negative+=a[i];
	}
	sum=positive+negative;
	
	printf("sum of positive number is %d,sum of negative number is %d,sum of all the number is %d",positive,negative,sum);
    return 0;
}
