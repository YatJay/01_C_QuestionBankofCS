/*程序的功能是： 有五个学生，每个学生的数据包括学号、姓名（最长 19 字节）、三门课的成绩，
	从键盘输入五个学生的数据，并计算每个学生的平均成绩，最后显示最高平均分的学生的信息（包括学号，姓名，三门课的成绩，平均分数）。
注： 要求用结构体编程，变量数据类型的选择应适当，在保证满足设计要求精度的情况下，养成不浪费内存空间和计算时间的好习惯。*/

/*
1.结构体变量的声明在主函数外 
2.gets()函数不执行/被跳过——解决方案： 
	之前使用scanf的时候，会遗留一个’\n’在缓冲区里，因此，gets()误将这个回车作为了它的输入。应在gets函数之前使用，fflush(stdin)；清空默认缓冲区
	（使用stdin，不是自己定义的gets(a)数组的数组a)
3.定义结构体本质上是定义了一种新的数据类型，这种数据类型的使用方式与一般数据类型不同；
4.初始化输入时，另见改动版本(答案)，输入时只适用scanf()相比更加简洁 
*/

#include <stdio.h>
#include <string.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */

//>>>结构体变量的定义在主函数之外； 


struct myClass{
		int num;
		char name[20];
		float score1,score2,score3,aver;
	};
void inputMyClass(struct myClass myClass[5]);
void avgScore(struct myClass myClass[5]);
int getHighAvg(struct myClass myClass[5]);


/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	struct myClass myClass[5];
	
	inputMyClass(myClass);
	avgScore(myClass);
	high = getHighAvg(myClass);
	
	

	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
void inputMyClass(struct myClass myClass[5]){
	int i;
	for(i=0;i<5;i++){
		printf("For student %d",i+1);
		printf("\nPlease input the number: ");
		scanf("%d",&myClass[i].num);
		
		fflush(stdin);
		
		printf("\nPlease input the name: ");
		gets(myClass[i].name);
		printf("\nPlease input the score1,score2,score3:");
		scanf("%f%f%f",&myClass[i].score1,&myClass[i].score2,&myClass[i].score3);
	}
	printf("Input over!");
}

void avgScore(struct myClass myClass[5]){
	int i;
	for(i=0;i<5;i++){
		myClass[i].aver=(myClass[i].score1+myClass[i].score2+myClass[i].score3)/3;
	}
}

int getHighAvg(struct myClass myClass[5]){
	int high = 0,i;
	for(i=1;i<5;i++){
		if(myClass[high].aver<myClass[i].aver){
			high=i;
		}
	}
	return high;
}


