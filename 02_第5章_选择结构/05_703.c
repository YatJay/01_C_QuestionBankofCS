/*��֪ĳ��˾Ա���ı���нˮΪ 500��ĳ�����ӹ��̵����� profit����������������ɵĹ�ϵ���£�����
��λ��Ԫ����
profit �� 1000 û����ɣ�
1000 < profit �� 2000 ��� 10%��
2000 < profit �� 5000 ��� 15%��
5000 < profit �� 10000 ��� 20%��
10000 < profit ��� 25%��
�����������������Ա����нˮ*/
#include <stdio.h>
int main(void)
{
    int profit;
    float tc,salary;
    
    printf("Input profit:\n");
    scanf("%d",&profit);
    if(profit<=1000) tc = 0;
    if(profit>1000&&profit<=2000) tc = 0.1*profit;
    if(profit>2000&&profit<=5000) tc = 0.15*profit;
    if(profit>5000&&profit<=10000) tc = 0.2*profit;
    if(profit>10000) tc = 0.25*profit;
    
    salary = 500+tc;
    printf("salary = %.2f\n",salary);
    return 0;
}
