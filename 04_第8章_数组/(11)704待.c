/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ�������������� 6 = 1 + 2 + 3��
	�Ӽ�������һ����������Լ������ �� 32767����ʱ������ �� 100�����ҳ��������ڵ����������������ӡ�*/

#include <stdio.h>
int main(void)
{
    int num,factor[100],i,j,k,count=0,sum;
    printf("Please input the number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    	for(j=1,k=0;j<i;j++){
    		if(i%j==0){
    			factor[k]=j;
    			k++;
			}
		}
		for(j=0;j<=k-1;j++){
			sum+=factor[j];
		}
		if(sum==i){
			printf("%d is wanshu",i);
			for(j=0;j<=k-1;j++){
				printf("%d",factor[j]);
			}
		}
	}
	
    return 0;
}
