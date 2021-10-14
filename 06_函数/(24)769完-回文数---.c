/*��� m �� n ֮��Ļ��������� m �� n �Ӽ��̶��루�ٶ����� 5 �� m �� n �� 100000����������ָ�����뷴����ַ���һ�������� 1�� 11�� 101�� 131 �ȡ�*/

#include <stdio.h>

int isPrime(int num);
int isHuiwen(int num);

int main(void)
{
    int m,n,i;
	do{
    	printf("Input m & n : ");
    	scanf("%d %d",&m,&n);
	}while(m<5||n>100000||m>n);
	
	for(i=m;i<=n;i++){
		if(isPrime(i)==1&&isHuiwen(i)==1){
			printf("%d ",i);
		}
	}
    
    return 0;
}

int isPrime(int num){
	int i,flag=1;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}

int isHuiwen(int num){
	int temp,rev=0,org,flag=0;  //�ǵ�rev����ֵΪ0�������ۼӹ����н������ 
	org=num;
	while(num!=0){
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	
	if(rev==org){
		flag=1;
	}
	
	return flag;
}
