/*�������� m�� n��Լ���� m �� n �� �� 1000 ��Ϊ����������
������� m �� n���� m �� n�����ܱ� 3 ������������λ������ 5 ������������*/
#include <stdio.h>
int main(void)
{
    int m,n,begin,end,i,ge,shi,bai;
    //�˴��Ķ����������Ϊʹ��ѭ����������ڹ涨��Χ����������
	do{
		printf("Please input m & n(m,n<=1000): ");
		scanf("%d %d",&m,&n);
	}while(m<1||m>1000||n<1||n>1000);
    
	if(m>=n){
    	begin=n;
    	end=m;
	}
	else{
		begin=m;
		end=n;
	}
	printf("Result: ");
	//����ѭ�����ڼ�������Χ�ڵ�ÿ���� 
	for(i=begin;i<=end;i++){
		if(i%3==0){ //���ж��Ƿ��ܱ�3�������������������λ������λ�����۸�����λ���Ƿ�Ϊ5����� 
			if(i>=1&&i<100){
				ge=i%10;
				shi=i/10;
				if(ge==5||shi==5) {
					printf("%d ",i);
				}
			}
			else if(i>=100&&i<=1000){
				ge=i%10;
				shi=i/10%10;
				bai=i/100;
				if(ge==5||shi==5||bai==5) {
					printf("%d ",i);
				}
			}
		}
	}
    
    return 0;
}
