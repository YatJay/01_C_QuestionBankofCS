/*程序的功能是： 有五个学生，每个学生的数据包括学号、姓名（最长 19 字节）、三门课的成绩，从键盘输入五个学生的数据，计算每个学生的平均成绩并按平均成绩由高到低排序，并将排序结果显示。
	注： 要求用结构体编程，变量数据类型的选择应适当，在保证满足设计要求精度的情况下，养成不浪费内存空间和计算时间的好习惯。*/

/*
1.根据已知代码给出的 STUDENT myclass[5]可知，这里使用了typedef定义结构体变量的别名，否则定义结构体变量必须使用 struct 结构体类型名 结构体变量名  这样的形式
2.参考本题已知代码部分以及答案，针对结构体数组进行遍历时使用 结构体数组首地址+i 的形式进行遍历 
3.参考本题已知代码部分以及答案，针对结构体数组进行遍历时使用 结构体数组首地址+i 的形式进行遍历 以及 进行排序处理 
*/

#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(考生可在本行后添加代码，行数不限) */
typedef struct student{
	int num;
	char name[20];
	int  math,english,computer; //参考结果截图以及已知代码可知需要定义为int形式 
	float average;
} STUDENT;
void input(STUDENT myclass[],int N);
void sort(STUDENT myclass[],int N);


/* User Code End(考生添加代码结束) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	
	input(myclass,N);
	sort(myclass,N);
	/* User Code End(考生添加代码结束) */
	
	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i=0; i<N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu+i)->num, (pStu+i)->name,
			(pStu+i)->math, (pStu+i)->english, (pStu+i)->computer, (pStu+i)->average);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
void input(STUDENT myclass[],int N){
	int i;
	printf(" Num Name Math English Computer\n");
	for(i=0;i<N;i++){
		printf("%d: ",i+1);
		scanf("%d %s %d %d %d",&myclass[i].num,myclass[i].name,&myclass[i].math,&myclass[i].english,&myclass[i].computer);
		myclass[i].average=(float)(myclass[i].math+myclass[i].english+myclass[i].computer)/3.0;
		//后面表达式结果是int类型，需要加(float)强制类型转换或者将其中参与运算的数字改为浮点数 
	}
}
void sort(STUDENT myclass[],int N){
	STUDENT temp;
	int i,j;
	for(i=1;i<=N-1;i++){
		for(j=0;j<=N-i-1;j++){
			if(myclass[j].average<myclass[j+1].average){
				temp=myclass[j];
				myclass[j]=myclass[j+1];
				myclass[j+1]=temp;
			}
		}
	}
}


