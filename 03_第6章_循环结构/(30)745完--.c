/*�������������� m �� n���������Լ������С��������
ע�����Լ��Ҳ��������ӣ�ָĳ����������������������һ����
�����������еı�����Ϊ���ǵĹ�������������С��һ����������Ϊ������������С��������*/
#include <stdio.h>
int main(void)
{
    int m,n,temp,i;
    int maxyue,minbei;
    printf("Please input 2 number: ");
    scanf("%d%d",&m,&n);
    if(m>m){
    	temp=m;
    	m=n;
    	n=temp;
	}
	for(i=1;i<=m;i++){
		if(m%i==0&&n%i==0){
			maxyue=i;
		}
	}
	minbei=m*n/maxyue;
	printf("\nThe greatest common divisor is %d\nThe least common multiple is %d\n",maxyue,minbei);
    
    return 0;
}
