/*程序的功能是： 
先从键盘读入的 8 个学生的 6 门课成绩存放在二维数组 student 中（每一行存储一个学生的数据，第 0 列为学号，第 1 ~ 6 列依次为 6 门课的成绩），
再从键盘读入一个学号，在 student 查找该学生是否存在，若存在，则输出其平均成绩，若不存在，则显示“not Find!”。*/

/*
二维数组行指针
	0.char (*p)[80] 定义一个行指针变量 
	1.p+i是行指针，即指向的是一整行所有元素，若对它加1则指向下一行即整个n个元素
	2.由于*(p+i)是取整行的数据，使用时无意义，所以 *(p+i) 在表达式中指向本行的首元素，从而 *(p+i)+j可以指向这一行的各个元素，*(*(p+i)+j) 访问本行的各个元素
	3.*(p+1) 在定义时或者和 sizeof、& 一起使用时才表示整个数组
*/
#include<stdio.h>

#define NOT_FIND -1
#define TOTAL_STU 8

/* 函数aver的功能为：求学号为stuNo的学生的6门课课程之平均成绩，并通过函数值返回
		若未找到学生stuNo，则返回NOT_FIND */	
float aver(int (*pStu)[7],int stuNo);

int main(void)
{
	int student[TOTAL_STU][7]; /* the first column save student's number */
	float averScore;
	int i,j,stuNumber;

	printf("Input the %d student's number and score: \n", TOTAL_STU);
	/* 本部分代码功能建议：从键盘读入的8个学生的6门课成绩存放在二维数组student中 */	
	/* User Code Begin(Limit: lines<=6, lineLen<=50, 考生可在本行后添加代码、最多6行、行长<=50字符) */
	for(i=0;i<TOTAL_STU;i++){
		for(j=0;j<7;j++){
			scanf("%d",&student[i][j]);
		}
		printf("\n");
	}
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nInput a student's number to compute: ");
	scanf("%d", &stuNumber);

	/* 本部分代码功能建议：调用函数aver()求平均值 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	averScore=aver(student,stuNumber);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
	if (NOT_FIND == averScore)
	{
		printf("\nstudent of No.%d not Find!\n", stuNumber);
	}
	else
	{
		printf("\nThe No.%d student's average is %.2f\n", stuNumber, averScore);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数aver，行数不限) */
float aver(int (*pStu)[7],int stuNo){
	float aver;
	int i,j,sum=0,flag=0;
	for(i=0;i<TOTAL_STU;i++){
		if(*(*(pStu+i)+j)==stuNo){
			flag=1;
			for(j=1;j<7;j++){
				sum+=*(*(pStu+i)+j); //此处改动：只使用行指针完成数组访问，注意两重 * 
			}
			aver=sum/6.0;
		}
	}
	if(flag==0){
		aver=-1;
	}
	return aver;
}
