/*����Ĺ����ǣ��Ӽ�������һ������ n�������Ӧ�ĺ��� f(n) ֵ������ʾ����ʽ�����Ӧ��Ϣ������ f(n)
�Ķ������£�
		1 (n = 1)
f(n) =	2f(n/2) + n (n > 1)
		0 (n < 1)											*/
	
#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
long int fun(int n);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn=fun(n);//______________________________  /* userCode(<50�ַ�): ���ú�������f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
long int fun(int n){
	long int res;
	if(n==1) res=1;
	else if(n<1) res=0;
	else{
		res=2*fun(n/2)+n;  //>>>�Ѿ�����fun()����ֵΪlong int���ͣ��˱��ʽ����ʱ�Զ������������ͣ�����ǿ������ת�� 
	}
	return res; 
} 


