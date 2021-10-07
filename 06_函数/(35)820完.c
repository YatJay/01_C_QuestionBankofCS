/*程序的功能是：从键盘输入一个整数 n，计算对应的函数 f(n) 值，并按示例格式输出相应信息。函数 f(n)
的定义如下：
		1 (n = 1)
f(n) =	2f(n/2) + n (n > 1)
		0 (n < 1)											*/
	
#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
long int fun(int n);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn=fun(n);//______________________________  /* userCode(<50字符): 调用函数计算f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
long int fun(int n){
	long int res;
	if(n==1) res=1;
	else if(n<1) res=0;
	else{
		res=2*fun(n/2)+n;  //>>>已经定义fun()返回值为long int类型，此表达式运算时自动调整数据类型，不必强制类型转换 
	}
	return res; 
} 


