/*程序的功能是：求 S = 1/1! +1/2! +1/3! + … +1/N! 并输出结果。 N 为任意自然数（只考虑 int 型），从键盘读入*/

#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=20, 考生可在本行后添加代码、最多1行、行长<=20字符) */
double fac(int num);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int i, n;
	double Sum = 0;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		Sum += 1 / fac(i);
	}

	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f\n", n, Sum);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
double fac(int num){
	double factorial=1.0,i;
	for(i=1;i<=num;i++){
		factorial*=i;
	}
	return factorial;
}
