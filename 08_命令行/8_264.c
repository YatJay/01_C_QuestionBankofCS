/*����Ĺ����ǣ�
	�������������ĸ��ַ�������ʽΪ��P264  ��1 ��2 ��3 ��4����ʾ����ʽ���������4���ַ�����
	�����ʽ����ȷ����29 
	*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc != 5)
	{
		printf("Input error.");
		printf("usage: 8_264  ��1 ��2 ��3 ��4\n");
		exit(29);
	}

	printf("��4=%s  ��3=%s  ��2=%s  ��1=%s\n", argv[4], argv[3], argv[2], argv[1]);

	return 0;
}


