/*����ÿֻ 5 Ԫ��ĸ��ÿֻ 3 Ԫ��С��ÿ 3 ֻ 1 Ԫ���� M ԪǮ�� N ֻ�����ʹ�����ĸ����С������ֻ��*/
#include <stdio.h>
int main(void)
{
    int money, number, cock, hen, chick;
    printf("Input the money: ");
    scanf("%d", &money);
    printf("Input the number: ");
    scanf("%d", &number);
    printf("\n  cock  hen  chick\n");
    for (cock = 0; cock <= number; cock++)
    {
        for (hen = 0; hen <= number; hen++)
        {
            for (chick = 0; chick <= number; chick++)
            {
            	//
                if (cock * 5 + hen * 3 + chick / 3 == money && chick % 3 == 0 && cock + hen + chick == number)
                {
                    printf("%6d%6d%6d\n", cock, hen, chick);
                }
            }
        }
    }
    return 0;
}
