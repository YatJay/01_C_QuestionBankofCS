/*程序的功能是： 有五个学生，每个学生的数据包括学号、姓名（最长 19 字节）、三门课的成绩，
从键盘输入五个学生的数据，并计算每个学生的平均成绩，最后显示最高平均分的学生的信息（包括学号，姓名，三门课的成绩，平均分数）。*/

#include <stdio.h>

struct student
{
	int  num;
	char name[20];
	float score1, score2, score3;
	float aver;
};

void Input(struct student *pStu, int n);
int Highest(struct student *pStu, int n);

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */
	struct student myClass[5];

	/* 本部分代码功能建议：调用相应的函数完成数据输入和统计 */
	/* User Code Begin(Limit: lines<=2, lineLen<=50, 考生可在本行后添加代码、最多2行、行长<=50字符) */
	Input(myClass,5);
	high = Highest(myClass,5);

	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* 输入N个学生的信息并计算平均分 */
void Input(struct student *pStu, int n)
{
	int i;

	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i=0; i<n; i++)
	{
		printf("%d:", i+1);
		scanf("%d%s %f%f%f",&(pStu+i)->num,(pStu+i)->name,&(pStu+i)->score1,&(pStu+i)->score2,&(pStu+i)->score3);
		(pStu+i)->aver=((pStu+i)->score1+(pStu+i)->score2+(pStu+i)->score3)/3.0;
	}
}

/* 找出并通过函数值返回最高平均分学生的序号 */
int Highest(struct student *pStu, int n)
{
	int i, high = 0;

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	for(i=1;i<n;i++){
		if((pStu+high)->aver<(pStu+i)->aver){
			(pStu+high)->aver=(pStu+i)->aver;
			high=i;
		}
	}
	return high;
}
	/* User Code End(考生添加代码结束) */

	
