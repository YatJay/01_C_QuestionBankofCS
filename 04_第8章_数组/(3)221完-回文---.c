/*�Ӽ��̶���һ���ַ�����Լ�����ַ��� �� 127 �ֽڣ��������ַ����Ƿ��ǻ��ġ���ν���ļ������뷴���ƴд��һ�������硰adgda�� ��*/

/*
ϸ��:
1. strlen()�����ַ�����ʵ�ʳ��� (������\0)
2.�����0��ʼ����������-1�����ַ��������һ��Ԫ�ص��±�
3.ѭ�������ж��޸�flag��־����ѭ���Ժ��ٸ���flag�仯����ж������� 
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128];
    int len, i, j, flag = 0;
    printf("Please input string: ");
    gets(str);
    len = strlen(str);  //strlen()�����ַ�����ʵ�ʳ��� (������\0)
    for (i = 0, j = len - 1; i <= j; i++, j--)  //�����0��ʼ������len-1�����ַ��������һ��Ԫ�ص������±� 
    {
        if (str[i] != str[j])  //���ԳƵ�λ�����ַ�����Ԫ�ز�ͬ��˵�����ǻ��ģ���flag��Ϊ1 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)  //��flag=0����˵�����ַ�������һ������ 
    {
        printf("\n%s is hui wen.\n", str);
    }
    else
    {
        printf("\n%s is not hui wen.\n", str);
    }
    return 0;
}
