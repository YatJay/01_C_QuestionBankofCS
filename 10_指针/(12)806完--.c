/*����Ĺ����ǣ� 
	�������� m�� n��Լ���� m �� n �� �� 1000 ��Ϊ����������������� m �� n���� m ��n�����ܱ� 3 ������������λ������ 5 ������������
	�����к��� void fun(int rsNum[], int begin, int end, int*Count) �Ĺ����ǣ�
	��������� begin �� end���� begin �� end�� ���ܱ� 3 ������������λ������ 5 ������������
	������С�����˳����� rsNum ��ָ�������У���Щ���ĸ���ͨ���β� Count ���ء�*/

/*
//>>>ע��:
	1.(*Count)++���д��*Count++ ���ȼ���Count++�� *(Count++)��*��++����2�������ǽ������������ 
	2.������rsNum��numP��ַ��ͬ����ͬһ�����飬ֻ�е�������3ʱ����ӵ����� rsNum��
		������numP[]�� ����numP=rsNum��ַ��ʼ �� numP+(*Count)=rsNum+(*Count)��������ͬ
		�� numP+(*Count)=rsNum+(*Count)�����������numP[]����Ĳ��� 
*/

#include<stdio.h>

void fun(int rsNum[], int begin, int end, int *Count);

int main(void)
{
	int i, m, n, tmp, num[1000], numCount;

	printf("Input m, n: ");
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}

	/* �����ִ��빦�ܽ��飺���ú���fun()��ɼ��� */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к���Ӵ��롢���1�С��г�<=50�ַ�) */
	fun(num, m, n, &numCount);
	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	for (i=0; i<numCount; i++)
	{
		printf("%d ", num[i]);
	}
	putchar('\n');

	return 0;
}

void fun(int rsNum[], int begin, int end, int *Count)
{
	int i, j=0, *numP=rsNum;

	for (i=begin; i<=end; i++)
	{
		if (i/100 == 5 || i/10 % 10 == 5 || i%10 == 5)
		{
			numP[j] = i;
			j++;
		}
	}

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	*Count=0;
	for(i=0;i<j;i++){
		if(numP[i]%3==0){
			rsNum[*Count]=numP[i];  
			(*Count)++;  //>>>ע��:���д��*Count++ ���ȼ���Count++�� *(Count++)��*��++����2�������ǽ������������ 
			//������rsNum��numP��ַ��ͬ����ͬһ�����飬ֻ�е�������3ʱ����ӵ����� rsNum��
			//������numP[]�� ����numP=rsNum��ַ��ʼ �� numP+(*Count)=rsNum+(*Count)��������ͬ
			//�� numP+(*Count)=rsNum+(*Count)�����������numP����Ĳ��� 
		}
	}
	/* User Code End(������Ӵ������) */
}
/* Program End(���򵽴˽������˺���������ݣ�����0��) */
