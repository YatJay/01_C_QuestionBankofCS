/*����Ĺ����ǣ� �Ӽ�������һ������ n��n �� 0���� x�������Ӧ�� n �����õ¶���ʽ Pn(x) ��ֵ������
ʾ����ʽ�����Ӧ��Ϣ�� n �����õ¶���ʽ Pn(x) �Ķ������£�
		1 (n = 0)
Pn(x) =	x (n = 1)
		[(2n - 1)* x * P�±�(n - 1)(x) - (n - 1)*P�±�(n - 2)(x)]/n  (n > 1)                           */

#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
double fun(int n,int x);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx=fun(n,x);//______________________________  /* userCode(<50�ַ�): ���ú�������Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
double fun(int n,int x){
	double res;
	if(n==0) res=1;
	else if(n==1) res=x;
	else if(n>1){
		res=((2*n-1)*x*fun(n-1,x)-(n-1)*fun(n-2,x))/n;
	}
	return res;
}


