/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ�������������� 6 = 1 + 2 + 3��
	�Ӽ�������һ����������Լ������ �� 32767����ʱ������ �� 100�����ҳ��������ڵ����������������ӡ�*/

#include <stdio.h>

int iswanshu(int num);
int main(void)
{
    int num,factor[100],i,j;
    printf("Please input the number:");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    	if(iswanshu(i)==1){
    		printf("%5d is a wanshu:",i);
    		for(j=1;j<=i/2;j++){
    			if(i%j==0) printf("%5d",j);
			}
			puts("\n");
		}
	}
    return 0;
}

int iswanshu(int num){
	int i,sumfactor=0,flag=0;
	for(i=1;i<=num/2;i++){
		if(num%i==0){
			sumfactor+=i;
		}
	}
	if(sumfactor==num){
		flag=1;
	}
	return flag;
}
