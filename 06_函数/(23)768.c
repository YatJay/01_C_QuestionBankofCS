/*����Ĺ����ǣ� ���Ӽ��̶����һ��ʮ�������ַ���ת����һ��ʮ�������������ע�⣺
	1. ����ֻ����ת���ɵ�ʮ���ƴ�С���ᳬ�� long int �����ܱ�ʾ���������
	2. ֻ�账������������������
	3. �������ĸ�����Ǵ�дҲ����Сд��
	4. �����в���ʹ�ÿ⺯�� isxdigit()�� sscanf() ��ʹ��ͬ���ı��������������ʡ�*/

#include<stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */



/* User Code End(������Ӵ������) */

int main(void)
{
	int flag;  /* ��־���������Ƿ�Ϸ���0��ʾ���Ϸ� */
	long int result10;  /* ת����� */
	char str[20];

	printf("input a data:");
	gets(str);

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */



	/* User Code End(������Ӵ������) */

	if (0 == flag)
	{
		printf("\ndata is error.\n");
	}
	else
	{
		printf("\nThe result is: %ld\n", result10);
	}

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */



