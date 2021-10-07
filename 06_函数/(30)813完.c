/*程序的功能是：有一递推数列，满足 
	f(0) = 0， 
	f(1) = 1， 
	f(2) = 2， 
	f(n + 1) = 2f(n) + f(n - 1) f(n - 2)（n ≥2），编写程序求 f(n) 的值（n 由键盘输入， 13 ≥ n ≥ 2）*/
	
#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double fun(int n);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn=fun(n);//______________________________  /* userCode(<50字符): 调用函数计算fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double fun(int n){
	double res;
	if(n==0) res=0;
	else if(n==1) res=1;
	else if(n==2) res=2;
	else{
		res=(double)2*fun(n-1) + fun(n-2)*fun(n-3);  //据答案，此处可不使用 (double)强制转换数据类型，因为fun()本身是double类型的，计算过程会合并类型 
	}
	return res;
}
