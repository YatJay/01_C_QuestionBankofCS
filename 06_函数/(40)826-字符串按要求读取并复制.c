/*����Ĺ����ǣ�
	1. �Ӽ��̶���һ���ַ� Str�����п����пո�Լ���ַ��� �� 127 �ֽڣ������� m��
		�� Str ����Ϊ 0���򱨴����¶�ȡ��ֱ������Ҫ��Ϊֹ��
		�� m С�� 1 �� m ���� Str �ĳ��ȣ��򱨴����¶�ȡ��ֱ������Ҫ��Ϊֹ����һ�����ɺ��� getInput() ʵ�֡�
	2. ���ַ��� Str �дӵ� m ���ַ���ʼ��ȫ���ַ����Ƶ� dstStr �С���һ�����ɺ��� copyStr() ʵ�֡�
	ע�������в���ʹ�ÿ⺯�� stpcpy()�� strcat()�� strncat()�� strncpy()�� memcpy()�� strcpy() ��ʹ��ͬ���ı���������������*/
	
#include <stdio.h>
#include <string.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=2, lineLen<=80, �������ڱ��к���Ӵ��롢���2�С��г�<=80�ַ�) */


/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int m, i;
	char Str[128], dstStr[128];
	
	m = getInput(Str);
	printf("\nInput is: Str=%s   m=%d\n", Str, m);

	for (i=0; i<128; i++)
	{
		dstStr[i] = '\0';
	}
	copyStr(Str, m, dstStr);
	printf("\nResult is: %s\n", dstStr);
	
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯���Ķ��壬��������) */
