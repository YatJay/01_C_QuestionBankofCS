/*����Ĺ����ǣ��� S = 1/1! +1/2! +1/3! + �� +1/N! ���������� N Ϊ������Ȼ����ֻ���� int �ͣ����Ӽ��̶���*/

#include <stdio.h>

void fun(double *sn, int n);

int main(void)
{
	int n;
	double Sum;

	printf("Please input n: ");
	scanf("%d", &n);

	fun(&Sum,n);//______________________________  /* userCode(<30�ַ�): ���ú�������Sum */
	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f\n",n,Sum);

	return 0;
}


void fun(double *sn, int n)
{
	int i;
	double Sum=0, jc=1;

	for (i=1; i<=n; i++)
	{
		jc *= i;  //�۳˽�� 
		Sum += 1 / jc;  //�۳˽������ĸ���ۼ� 
	}

	*sn=Sum; //ʹ��ָ���޸�ʵ������    //______________________________  /* userCode(<30�ַ�): ��������ͨ��ָ����������������� */
}
