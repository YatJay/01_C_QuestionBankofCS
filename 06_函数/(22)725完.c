/*�������飬��쳲��������е�ǰ n��Լ�� 3 �� n �� 20����������Ļ�ϣ�������֮����ˮƽ�Ʊ�� '\t'��������
	쳲�������ʽΪ�� 
	f(1) = 1�� 
	f(2) = 1�� 
	f(n) = f(n - 1) + f(n - 2)��n �� 3����*/
	
#include <stdio.h>

int  Fibozina(int n);

int main(void)
{
	int n,result[20],i;
    do{
    	printf("input a data(3--20): ");;
    	scanf("%d",&n);
	}while(n<3||n>20);
    
    for(i=0;i<n;i++){
    	result[i]=Fibozina(i+1);  //�Ʋ��������д�1��ʼ�ƣ�1~n��n���������ŵ� result[0]~result[n-1] �� 
	}
	
	for(i=0;i<n;i++){
		printf("%d\t",result[i]);
	}
	   
    return 0;
}
int Fibozina(int n){
	int res;
	if(n==1) res=1;
	else if(n==2) res=1;
	else{
		res=Fibozina(n-1) + Fibozina(n-2);
	}
	return res;
}
