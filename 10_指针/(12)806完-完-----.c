/*程序的功能是： 
	键盘输入 m， n（约定： m 和 n 均 ≤ 1000 且为正整数），输出介于 m 和 n（含 m 和n）中能被 3 整除且至少有位数字是 5 的所有整数。
	程序中函数 void fun(int rsNum[], int begin, int end, int*Count) 的功能是：
	计算出介于 begin 和 end（含 begin 和 end） 、能被 3 整除且至少有位数字是 5 的所有整数，
	并按从小到大的顺序放在 rsNum 所指的数组中，这些数的个数通过形参 Count 返回。*/

/*
//>>>注意:
	1.(*Count)++如果写成*Count++ 则先计算Count++再 *(Count++)：*和++都是2级，但是结合性自右向左 
	2.本质上rsNum和numP地址相同，是同一个数组，只有当能整除3时才添加到数组 rsNum，
		遍历完numP[]后 ，从numP=rsNum地址开始 到 numP+(*Count)=rsNum+(*Count)的数据相同
		从 numP+(*Count)=rsNum+(*Count)往后就是数组numP[]长余的部分 
*/

#include<stdio.h>

void fun(int rsNum[], int begin, int end, int *Count);

int main(void)
{
	int i, m, n, tmp, num[1000], numCount;

	printf("Input m, n: ");
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}

	/* 本部分代码功能建议：调用函数fun()完成计算 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	fun(num, m, n, &numCount);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	for (i=0; i<numCount; i++)
	{
		printf("%d ", num[i]);
	}
	putchar('\n');

	return 0;
}

void fun(int rsNum[], int begin, int end, int *Count)
{
	int i, j=0, *numP=rsNum;

	for (i=begin; i<=end; i++)
	{
		if (i/100 == 5 || i/10 % 10 == 5 || i%10 == 5)
		{
			numP[j] = i;
			j++;
		}
	}

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	*Count=0;
	for(i=0;i<j;i++){
		if(numP[i]%3==0){
			rsNum[*Count]=numP[i];  
			(*Count)++;  //>>>注意:如果写成*Count++ 则先计算Count++再 *(Count++)：*和++都是2级，但是结合性自右向左 
			//本质上rsNum和numP地址相同，是同一个数组，只有当能整除3时才添加到数组 rsNum，
			//遍历完numP[]后 ，从numP=rsNum地址开始 到 numP+(*Count)=rsNum+(*Count)的数据相同
			//从 numP+(*Count)=rsNum+(*Count)往后就是数组numP长余的部分 
		}
	}
	/* User Code End(考生添加代码结束) */
}
/* Program End(程序到此结束，此后不能添加内容，否则0分) */
