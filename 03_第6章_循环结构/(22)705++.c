/*�Ӽ����������ڼ��ĵ�һ����ĸ�������ַ����� getchar()�����ɳ����ж������ڼ�������ʾ���Ӧ��Ӣ�ĵ��ʣ�
�����һ����ĸһ����������жϵڶ�����ĸ�����ڵĵ�һ����ĸ��Ϊ��д��
���������ַ����ܹ������ڵ�Ӣ�ĵ��ʣ��������data error����
������ظ��жϣ�ֱ��������ĸ��Y����*/
#include <stdio.h>
int main(void)
{
    char str[1000], ch;     //�ַ�����洢�ַ���  ch����getchar()�ķ���ֵ 
    int i, count = 0;  //ѭ���ڲ�������i  countͳ��������Ԫ�ظ�����ÿ����һ���ַ�������1 
    printf("Please input the letter of someday: ");
/* ��forѭ������
1.��һ���ַ��������������ַ��� 
	ÿһ��ѭ����getchar()����һ���ַ�����ֵ��ch
	�ж�ch��ΪY��س�������ѭ��������ch��ֵ�浽�ַ�����str[]�У����Ҷ��ַ�����ʹ��count������ÿ�洢һ��ֵ��count��+1 
2.getchar()������ȡ��ǰ����̨�����룬ֱ�����س��������������������
	�����ķ���ֵΪ�û�����ĵ�һ���ַ���ASCII�룬��������-1���ҽ��û�������ַ����Ե���Ļ��
	����û��ڰ��س���֮ǰ�����˲�ֻһ���ַ��������ַ��ᱣ���ڼ��̻������У��ȴ�����getchar()���ö�ȡ��
	Ҳ����˵��������getchar()���ò���ȴ��û�����������ֱ�Ӷ�ȡ�������е��ַ���ֱ�����������ַ���ȡ��Ϻ󣬲ŵȴ��û�������
*/
    for (i = 0; i < 1000; i++)
    {
        ch = getchar();
        if (ch == 'Y' || ch == '\n')
        {
            break;
        }
        else
        {
            str[i] = ch;
            count++;
        }
    }
/*��forѭ�� 
1.forѭ�����switch()����������ַ���������ĸ��������ĸ�ظ��������ĸ�����ַ������е�Ԫ�أ�һ��һ�����
2. 
 
*/
    for (i = 0; i < count; i++)
    {
        switch (str[i])
        {
        case 'M':
            printf("Monday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'T':
            if (str[i + 1] == 'u')
            {
                printf("Tuesday\n");
                i++;
            }
            else if (str[i + 1] == 'h')
            {
                printf("Thursday\n");
                i++;
            }
            else
            {
                printf("data error\n");
            }
            break;
        case 'S':
            if (str[i + 1] == 'a')
            {
                printf("Saturday\n");
                i++;
            }
            else if (str[i + 1] == 'u')
            {
                printf("Sunday\n");
                i++;
            }
            else
            {
                printf("data error\n");
            }
            break;
        default:
            printf("data error\n");
        }
    }
    return 0;
}
