/*����Ĺ����ǣ� ������������ m �� n��������ڵ��� m��m > 5���� n ������������ĸ��������Կո������
ע��������Prime Number�������������ָ��һ������ 1 ����Ȼ���У����� 1 �ʹ����������⣬û����������Ȼ����������*/

/*
ע�⣺
1.����������Ĵ����и����� ������ ������ڵ��� m��m > 5���� n ������ �����ĳ���Ľ������ 
2.�ж�������һ�㷽�� 
*/

#include <stdio.h>
#include <math.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int isPrime(int m);

int main(void)
{
	int m, n, cnt;

	printf("Input the m, n: ");
	scanf("%d,%d", &m, &n);

	printf("\nThe result:\n");
	for (cnt=0; cnt<n; m++)
	{
		if(isPrime(m)==0)//______________________________  /* userCode(<50�ַ�): ���ú����ж�m�Ƿ�Ϊ���� */
		{
			printf("%d ", m);
			cnt++;
		}
	}
	putchar('\n');

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int isPrime(int m){
	int flag=0,i;
	for(i=2;i<m;i++){
		if(m%i==0){
			flag=1;
			break;
		}
	}
	return flag;
}
