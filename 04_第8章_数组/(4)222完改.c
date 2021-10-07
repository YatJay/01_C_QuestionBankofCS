#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128];
    int len, i;
    printf("Please input string: ");
    gets(str);
    len = strlen(str);
    printf("\nzi fu chuan chang du: %d", len);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'A' + 'Z' - str[i];
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'a' + 'z' - str[i];
        }
    }
    printf("\nmi wen: %s\n", str);
    return 0;
}
