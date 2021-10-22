/*程序的功能是： 
先从键盘读入的 8 个学生的 6 门课成绩存放在二维数组 student 中（每一行存储一个学生的数据，第 0 列为学号，第 1 ~ 6 列依次为 6 门课的成绩），
再从键盘读入一个学号，在 student 查找该学生是否存在，若存在，则输出其平均成绩，若不存在，则显示“not Find!”。*/

/*
二维数组行指针的使用 
	1.二维数组名本身是一个行指针类型的指针 
	2.int (*pStu)[7]定义一个行指针
	3.当函数接收的参数是一个二维数组行指针类型，使用时 直接把行指针等价代换成二维数组名
	4.可以只用指针进行二维数组操作 ，见改动版本 
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
		if(pStu[i][0]==stuNo){
			flag=1;
			for(j=1;j<7;j++){
				sum+=pStu[i][j];  //int (*pStu)[7]传入的是一个二维数组行指针类型，使用时 直接把行指针等价代换成二维数组名
			}
			aver=sum/6.0;
		}
	}
	if(flag==0){
		aver=-1;
	}
	return aver;
}
