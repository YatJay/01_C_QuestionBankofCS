/*�Ӽ��̶��� 4 ���� num1�� num2�� num3�� num4������� num1+ (num2 �� num3������) �� num4�����迼
�� num3Ϊ 0 �ͼ���������������Ҫ������Ľ���У��������ֿ��Ϊ 7������ 7 ʱ�� 0 ���㣩 �� С��
���ֿ��Ϊ 5*/

/*
������
������ĿҪ��
�����������������ֺ�С�����֣�������������ʱresult��Ϊdouble��
����ȡ�����㣬ȡ�����������������int���ͣ�
������ʽ�Ľ��������double���Ͳ��ܸ���result������������ʽ�б�����double���͵ı�������ʹ�ü���ʱ���ͬ��ȡdouble����

ע�⣺
printf()��ʽ������ϸ����122.c������
*/
#include <stdio.h>
int main(void)
{
    int num1, num2, num3;
    double num4, result;

    printf("������4������ ");
    scanf("%d%d%d%lf", &num1, &num2, &num3, &num4);
    result = num1 + (num2 % num3) * num4;
    printf("\n������Ϊ�� %013.5f\n", result);

    return 0;
}