/*程序的功能是： 从键盘上读入 5 个学生的姓名（char (10)）、学号（char (10)）和成绩（int），
	要求成绩必须在 0 ~ 100 之间，否则重新读入该学生信息。最后输出不及格学生的学号、名字和分数。
注： 要求用指针完成函数中结构体数组参数的传递以及各个数组元素的访问，访问结构体成员时使用“->” 形式，自定义函数头和函数体中不得出现数组下标形式的表示法。*/
/*
注意：
1. 形如(student+i)->name/student->name是的数据类型就是 name的数据类型，这里name是字符数组名，即是一个地址，就不需要加&符号 
2. 可以用指针变量指向结构变量 也可以用指针变量指向结构体变量中的成员。
	要注意指针变量的类型必须与它所指向变量的类型相同。
	当指针变量指向结构体变量时,对指针变量加1则跳过整个结构体而不是跳过一个成员。
*/
#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如结构体的定义、函数原型声明等，行数不限) */
struct stu{
	char name[10];
	char num[10];
	int score;
};

void input(struct stu *student,int n);
void output(struct stu *student,int n);
/* User Code End(考生添加代码结束) */

int main(void)
{  
	struct stu stud[5];	 
	
	input(stud, 5);   
	printf("\nfailed the exam: ");  
	output(stud, 5);
	
	return 0; 
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
void input(struct stu *student,int n){
	int i,temp;
	for(i=0;i<n;i++){
		printf("student %d: ",i+1);
		scanf("%s%s",(student+i)->name,(student+i)->num); //>>>(student+i)->name的数据类型就是name的数据类型，这里name是字符数组名，即是一个地址，就不需要加&符号 
		//printf("%s %s\n",(student+i)->name,(student+i)->num);
		scanf("%d",&temp);
		if(temp>=0&&temp<=100){
			(student+i)->score=temp;
		}
		else{
			printf("error score! input again!\n");
			i=i-1;
		}
		}
	}

void output(struct stu *student,int n){
	int i;
	for(i=0;i<n;i++){
		if((student+i)->score<60){
			printf("%s/%s,%d\t",(student+i)->num,(student+i)->name,(student+i)->score);
		}
	}
}
