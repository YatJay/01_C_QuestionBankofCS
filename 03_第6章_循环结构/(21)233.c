/*�Ӽ��̶���һ������ Num������С�����˳����������������������� 3 λ����
������λ����֮�����ϸ���ʮλ����ƽ���ټ��ϸ�����λ��������֮�͵��� Num��*/

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
		if(ge*shi*bai+shi*shi+ge*ge*ge==num){
			printf(" %d",i);
			flag=1;
		}
	}
	if(flag==0) printf("not found.\n");
    
    return 0;
}
