/*�Ӽ��̶���һ������ Num������С�����˳����������������������� 3 λ����������λ���ֵ������͵��� Num��*/
/*
ע�⣺���ñ�־λflag��ѭ����������ͨ��flag�ж�û���ҵ������ 
*/
#include <stdio.h>
int main(void)
{
    int num1, num2, ge, shi, bai, i, flag = 0;
    printf("Please Input a number: ");
    scanf("%d", &num1);
    printf("\nResult: ");
    for (i = 100; i < 1000; i++)
    {
        ge = i % 10;
        shi = i / 10 % 10;
        bai = i / 100;
        num2 = bai * bai * bai + shi * shi * shi + ge * ge * ge;
        if (num1 == num2)
        {
            printf("%5d", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("not Find!");
    }
    putchar('\n');
    return 0;
}
