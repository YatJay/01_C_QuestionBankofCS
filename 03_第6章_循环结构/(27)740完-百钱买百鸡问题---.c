/*公鸡每只 5 元，母鸡每只 3 元，小鸡每 3 只 1 元，用 M 元钱买 N 只鸡，问公鸡、母鸡、小鸡各几只。*/
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
