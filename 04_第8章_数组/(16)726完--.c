/*�Ӽ����϶���һ���ַ�������Ļ����������ַ��ĳ��ȼ����ݣ���������ȣ���������ݣ���
ע�⣺
1. �Իس���ʾ�н����һس��������������ݡ�����������з�������������ļ���������Ҳ��ʾ����
�������
2. ���û�����ʱ�����˺ܶ��ַ����������ǰ 100 ���ַ���
3. ����ʹ�ÿ⺯�� gets()�� fgets()�� strlen() ��ʹ��ͬ���ı��������������ʡ�*/

#include <stdio.h>
int main(void)
{
    int ch, i, len = 0;
    char str[101];
    printf("input a string: ");
    for (i = 0; i < 101; i++)
    {
        ch = getchar();
        if (ch == EOF || ch == '\n' || i == 100)
        {
            break;
        }
        else
        {
            str[i] = ch;
            len++;
        }
    }
    str[i] = '\0';
    printf("\nThe string lenth is: %d", len);
    printf("\nThe string is: %s\n", str);

    return 0;
}
