/*�Ӽ��̶���һ������ Num������С�����˳����������������������� 3 λ����
������λ���ֵ�ƽ�����ټ��ϸ������� 2 ��ֵ���� Num��*/
#include <stdio.h>
int main(void)
{
    int num,i,ge,shi,bai,flag=0;
    printf("Please input the number: ");
    scanf("%d",&num);
    printf("\nResult:");
	for(i=100;i<=999;i++){
		ge = i%10;
		shi = i/10%10;
		bai = i/100;
		if(ge*ge+shi*shi+bai*bai+i/2==num){
			printf(" %d",i);
			flag=1;
		}
	}
	if(flag==0) printf("not found.\n");
    
    return 0;
}
