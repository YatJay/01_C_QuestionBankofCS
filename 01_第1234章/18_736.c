/*�Ӽ���������һ����λ�������������λ�ϵ�����֮��*/

/*
����������һ����λ����
��10ȡ��õ���λ���֣�
����10Ĩȥ��λ���֣��ٶ�10ȡ��õ�ʮλ���֣� 
����100Ĩȥ��λ��ʮλ���֣��ٶ�10ȡ��õ���λ���֣�
����1000Ĩȥ��λʮλ��λ���֣��õ�ǧλ���֣� 
*/
#include <stdio.h>
int main(void)
{
    int num,ge,shi,bai,qian,sum;
    printf("Input a number with 4-digit: ");
    scanf("%d",&num);
    ge = num%10;
    shi = num/10%10;
    bai = num/100%10;
    qian = num/1000;
    sum = ge + shi + bai +qian;

    printf("\nge is %d\n",ge);
    printf("\nshi is %d\n",shi);
    printf("\nbai is %d\n",bai);
    printf("\nqian is %d\n",qian);
    printf("\nsum=%d\n",sum); 
    
    return 0;
}
