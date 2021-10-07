/*求 S = 1/1! +1/2! +1/3! + … +1/ N! 并输出结果（显示时小数部分占 16 位，计算时要求从第 1 项开始往
后累加）。 N 为任意自然数（只考虑 int 型），从键盘读入。*/
#include <stdio.h>
int main(void)
{
    int num, i;
	double fac = 1, sum = 0;
	printf("Please input n: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++){
		fac *= i; //计数器值可以直接拿来使用 妙 
		sum += 1 / fac;
}
	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f\n", num, sum);
    
    return 0;
}
