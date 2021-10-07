/*程序的功能是：计算并输出 n（ n ≤ 100） 门课程的平均成绩*/

/*
>>>注意此题给定代码中对于数组输入的计数方式：实际上-1已经计入数组中，但是计数数组长度时不把-1计入长度 
>>>score[i]=-1时跳出循环，此时实际数组长度是0~i共i+1个数据，但是count=i相当于是0~i-1共i个数据，-1不计入其中
*/

#include <stdio.h>

#define maxNums 100

/* userCode(<50字符): 自定义函数之原型声明 */
float avg(int array[],int count);

int main(void)
{
	int i, count, scores[maxNums];
	float avgScore;

	printf("Please input scores(-1 to exit): ");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &scores[i]);
		if (-1 == scores[i])
		{
			break;
		}
	}
	count = i;  //>>>注意此题给定代码中对于数组输入的计数方式：实际上-1已经计入数组中，但是计数数组长度时不把-1计入长度 
				//>>>score[i]=-1时跳出循环，此时实际数组长度是0~i共i+1个数据，但是count=i相当于是0~i-1共i个数据，-1不计入其中 

	avgScore = avg(scores,count);//______________________________  /* userCode(<50字符): 调用函数计算平均成绩 */
	printf("\naverage score is %.2f.\n", avgScore);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
float avg(int array[],int count){
	int sum,i;
	float avg;
	for(i=0;i<count;i++){
		sum+=array[i];
	}
	avg=(float)sum/count;
	return avg;
}
