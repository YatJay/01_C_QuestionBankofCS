/*����Ĺ����ǣ���һ�������У����� 
	f(0) = 0�� 
	f(1) = 1�� 
	f(2) = 2�� 
	f(n + 1) = 2f(n) + f(n - 1) f(n - 2)��n ��2������д������ f(n) ��ֵ��n �ɼ������룬 13 �� n �� 2��*/
	
#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
double fun(int n);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn=fun(n);//______________________________  /* userCode(<50�ַ�): ���ú�������fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
double fun(int n){
	double res;
	if(n==0) res=0;
	else if(n==1) res=1;
	else if(n==2) res=2;
	else{
		res=(double)2*fun(n-1) + fun(n-2)*fun(n-3);  //�ݴ𰸣��˴��ɲ�ʹ�� (double)ǿ��ת���������ͣ���Ϊfun()������double���͵ģ�������̻�ϲ����� 
	}
	return res;
}
