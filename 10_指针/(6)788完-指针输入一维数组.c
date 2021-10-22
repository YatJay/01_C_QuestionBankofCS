/*程序的功能是： 先从 main() 函数中输入数组长度 n（约定 n ≤ 20），
再调用自定义函数 scanfArr() 完成数组中的每个元素读入，然后分别调用自定义函数 maxArr()、 aver() 计算数组元素的最大值、平均值，最后输出最大值、平均值。
注： 要求用指针完成函数中数组参数的传递、以及各个数组元素的访问，即自定义函数头和函数体中不得出现数组下标形式的表示法。*/

/*
注意：
1.	*(pdata+i)要加括号，先算地址，再取地址；
	如果不加，由于*的优先级更高，先算*pdata取内容值，再对该内容值+i 
2.数组名本质上是一个指针常量，指向数组首地址 
3.除了 p=&a[0];	for(i=1;i<n;i++){	*(p+i);	}遍历数组之外还可以使用：
 		for(p=&a[0];p<a+n;p++){	*p;	}
*/
#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=3, lineLen<=80, 考生可在本行后添加代码、最多3行、行长<=80字符) */
void scanfArr(int *pdata,int n);
int maxArr(int *pdata,int n);
double aver(int *pdata,int n);


/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int Data[20], n, max;
	double average;

	printf("Please input the number n = ");
	scanf("%d", &n);
	printf("Please input the array elements : ");
	scanfArr(Data, n);

	max = maxArr(Data, n);
	average = aver(Data, n);
	printf("\nmax = %d\naverage = %.2f\n", max, average);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void scanfArr(int *pdata,int n){
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d",pdata+i);
//	}
	//以下是使用另一种指针方式进行数组遍历 
	int *pdata0=pdata;  //记下数组首地址 
	for(pdata;pdata<pdata0+n;pdata++){
		scanf("%d",pdata);
	}
}

int maxArr(int *pdata,int n){
	int max=*pdata,i;
	for(i=1;i<n;i++){
		if(max<*(pdata+i)){   //注意*(pdata+i)要加括号，先算地址，再取地址；如果不加，*的优先级更高，先算*pdata，再对其+i 
			max=*(pdata+i);
		}
	}
	return max;
}

double aver(int *pdata,int n){
	double avg;
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=*(pdata+i);
	}
	avg=(double)sum/n;
	return avg;
}

