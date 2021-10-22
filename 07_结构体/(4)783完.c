/*程序的功能是： 某班有 4 个学生，三门课，通过 main() 函数读入学生的学号（5 位数字）、姓（最长 7个字符）和三门课的成绩，
	然后通过调用用户自定义函数 DispScore() 实现这些信息的输出，调用用户自定义函数 FindNoPass() 实现找出有两门以上不及格的学生、输出其学号和不及格课程的成绩。
注： 要求用结构体编程*/
/*
1.切记切记：定义字符数组必须注意，要求学号5位数字，但是加上'\0'一共需要6位(scanf(%s)会自动补上)，若不多出这一位则会数组溢出
*/

#include<stdio.h>

#define SNUM 4 /* student number */
#define CNUM 3 /* course number */

/* User Code Begin(考生可在本行后添加代码，例如结构体的定义、函数原型声明等，行数不限) */
struct student{
	char num[6];  //>>>这里是根据已知代码确定；定义字符数组必须注意，要求学号5位数字，但是加上'\0'一共需要6位(scanf(%s)会自动补上)，若不多出这一位则会数组溢出 
	char name[8];
	int score[CNUM];
};

void DispScore(struct student stu[]);
void FindNoPass(struct student stu[]);





/* User Code End(考生添加代码结束) */

int main(void)
{
	int i, j;
	struct student stu[SNUM];

	printf("Please input student num name and score:\n");
	for (i=0; i<SNUM; i++)
	{ 
		printf("Student %d: ", i+1);
		scanf("%s %s",stu[i].num, stu[i].name);
		for (j=0; j<CNUM; j++)
		{
			scanf("%d", &stu[i].score[j]);
		}
	}
	
	DispScore(stu);
	FindNoPass(stu);

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
void DispScore(struct student stu[]){
	int i,j;
	printf("\nStudent Info and Score:\n");
	for (i=0; i<SNUM; i++){ 
		printf("Student %d: ", i+1);
		printf("%6s %8s\t", stu[i].num, stu[i].name);
		for (j=0; j<CNUM; j++)
		{
			printf("%5d ",stu[i].score[j]);
		}
		puts("\n");
	}
	printf("\n--------------------------------------------\n");
}

void FindNoPass(struct student stu[]){
	int i,j,count;
	printf("Two Course No Pass Student:\n");
	for (i=0; i<SNUM; i++){
		count=0;
		for (j=0; j<CNUM; j++){
			if(stu[i].score[j]<60){
				count++;
			}
		}
		if(count>=2){
			printf("%6s %8s\t", stu[i].num, stu[i].name);
			for (j=0; j<CNUM; j++){
				printf("%5d\t",stu[i].score[j]);
				}
				puts("\n");
			}
		}
	printf("--------------------------------------------\n");		
	}
	
