/*����ʵ������ a�� b��Ȼ����� a�� b ��ֵ*/
/*
ϸ�ڣ� 
ʵ������Ҳ��Ϊ��������ʵ����
��C�����У�ʵ��ֻ����ʮ���ơ�
���ж�����ʽ��ʮ����С����ʽ��ָ����ʽ��

c������double�������ݵ�����������������������float��double�����������B����̫�� 
double a;
scanf("%f",&a);   //Ӧ����scanf("%lf",&a);
ִ���������ʱ������double���͵����벻��ʹ��%f�������룬����%lf���������õ�a��ֵ��
�������double����ʱȴ������%f��������Ϊprintf("%f",a);��ִ��ʱC�Զ���double�͵Ĳ���ת����flaot�͡�
��double�͵����������ʽ���£�

double a;
scanf("%lf",&a);
printf("%f",a);
*/
#include <stdio.h>
int main(void)
{
    float a,b;
    printf("Please input two numbers:");
    scanf("%f %f",&a,&b);
    printf("%.6f\n%.6f",a,b);
    
    return 0;
}
