/*����Ĺ����ǣ�
1. ��������ʱ����ʾ��Please input numbers:�����ٴӼ����϶���һ��������ֻ���� int �ͣ���������֮��ֻʹ�ÿո��س����ָ���
	�������ɸ������ 10000 ���������������Ϊ -222 ʱ�����ʾ��������� -222 �����ڸ������ڡ�
2. ����һ��������С�����˳���������
3. ����������һ�����������Ļ�ϣ������ʽΪÿ�� 6 ������������֮��ʹ�ö��š�,���ָ���
	��������֮��Ŀ�ȣ����㶺�ţ�Ϊ 6 ��ʹ��������ʽ��ע�⣬��βû�ж��š�*/

#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
______________________________

int main(void)
{
	int i, j, mini;
	int inputData[maxNums] = {0}, dataCount=0;  /* inputData���ڱ�����������ݣ�dataCount��¼�������ݵĸ��� */

	printf("Please input numbers:");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &inputData[i]);
		if (endFlag == inputData[i])
		{
			break;
		}
		dataCount++;
	}

	for (i=0; i<dataCount-1; i++)
	{
		mini = i;
		for (j=i; j<dataCount; j++)
		{
			if (inputData[j] < inputData[mini])
			{
				mini = j;
			}
		}

		______________________________  /* userCode(<50�ַ�): ���ú����������ݵ�λ�� */
	}

	printf("\nOutput:\n");
	for (i=0; i<dataCount; i++)
	{
		printf("%-6d", inputData[i]);

		if (((i + 1) % 6) != 0 && i != dataCount - 1)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void swap()
