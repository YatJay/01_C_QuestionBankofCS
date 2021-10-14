/*程序的功能是： 有五个学生，每个学生的数据包括学号、姓名（最长 19 字节）、 四门课的成绩，
从键盘输入五个学生的数据，并计算每个学生的平均成绩，最后显示最高平均分的学生的信息（包括学号，姓名，四门课的成绩，平均分数）。
注： 要求用结构体编程，变量数据类型的选择应适当，在保证满足设计要求精度的情况下，养成不浪费内存空间和计算时间的好习惯。*/

#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
struct student
{
	int num;
	char name[20];
	float score1, score2, score3, score4, aver;
};
int GetMax(struct student myClass[], int n);

/* User Code End(考生添加代码结束) */

int main(void) {

int high; /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

/* User Code Begin(考生可在本行后添加代码，行数不限) */
struct student myClass[5];
int i;
printf("Please input students info:Num Name score1 score2 score3 score4\n");
for (i = 0; i < 5; i++)
{
	printf("%d:", i + 1);
	scanf("%d%s%f%f%f%f", &myClass[i].num, myClass[i].name,
		  &myClass[i].score1, &myClass[i].score2, &myClass[i].score3, &myClass[i].score4);
	myClass[i].aver = (myClass[i].score1 + myClass[i].score2 + myClass[i].score3 +
					   myClass[i].score4) /
					  4;
}
high = GetMax(myClass, 5);

/* User Code End(考生添加代码结束) */

printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
	   myClass[high].name, myClass[high].num,
	   myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
int GetMax(struct student myClass[], int n)
{
	int i, high = 0;
	float max = myClass[0].aver;
	for (i = 1; i < n; i++)
	{
		if (myClass[i].aver > max)
		{
			max = myClass[i].aver;
			high = i;
		}
	}
	return high;
}
