/*����һ�������¶ȣ�Ҫ����������¶ȣ����㹫ʽΪ C = 5 (F - 32)/9*/
/*
������
�������⣺ȷ��Ҫ��float������������ֵ�����ֵ

ע�⣺
����float��double
�Ա����Ա��˵��double ��float ��������double���ȸߣ���Ч����16λ��float����7λ�� 
��double�����ڴ���float��������double�������ٶȱ�float���ö࣬
C��������ѧ��������double ��float��ͬ����Ҫд�����õ�����ʱ��Ҫ��˫���ȣ���ʡ�ڴ棬�ӿ������ٶȣ���
*/

#include <stdio.h>
int main(void)
{
    float F0, C0;
    printf("Input the degree: ");
    scanf("%f", &F0);
    C0 = 5 * (F0 - 32) / 9;
    printf("\nF(%.2f)=C(%.2f)\n", F0, C0);

    return 0;
}