/*程序的功能是： 从键盘输入一个整数 n（n ≥ 0）和 x，计算对应的 n 阶勒让德多项式 Pn(x) 的值，并按
示例格式输出相应信息。 n 阶勒让德多项式 Pn(x) 的定义如下：
		1 (n = 0)
Pn(x) =	x (n = 1)
		[(2n - 1)* x * P下标(n - 1)(x) - (n - 1)*P下标(n - 2)(x)]/n  (n > 1)                           */

#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double fun(int n,int x);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx=fun(n,x);//______________________________  /* userCode(<50字符): 调用函数计算Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double fun(int n,int x){
	double res;
	if(n==0) res=1;
	else if(n==1) res=x;
	else if(n>1){
		res=((2*n-1)*x*fun(n-1,x)-(n-1)*fun(n-2,x))/n;
	}
	return res;
}


