/*程序的功能是： 输入两个整数 m 和 n，输出大于等于 m（m > 5）的 n 个素数，输出的各素数间以空格相隔。
注：素数（Prime Number），亦称质数，指在一个大于 1 的自然数中，除了 1 和此整数自身外，没法被其他自然数整除的数*/

/*
注意：
1.本程序给定的代码中给出了 类似于 输出大于等于 m（m > 5）的 n 个素数 这样的程序的解决方法 
2.判断素数的一般方法 
*/

#include <stdio.h>
#include <math.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int isPrime(int m);

int main(void)
{
	int m, n, cnt;

	printf("Input the m, n: ");
	scanf("%d,%d", &m, &n);

	printf("\nThe result:\n");
	for (cnt=0; cnt<n; m++)
	{
		if(isPrime(m)==0)//______________________________  /* userCode(<50字符): 调用函数判断m是否为素数 */
		{
			printf("%d ", m);
			cnt++;
		}
	}
	putchar('\n');

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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
