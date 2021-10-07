/*从键盘输入一个一百分制成绩，如果不在 0 ~ 100 范围内，则要求重新输入数据，直到输入的数据在 0~ 100 范围内。
将输入的数据转换成等级“A” “B” “C” “D” “E”。
90 分以上为“A”， 
80 ~ 89 分为“B”， 
70 ~ 79 分为“C”，
60 ~ 69 分为“D” ， 
60 分以下为“E”，
要求使用 switch()、 case、 default 语句且限制使用 5 个 case 分支，结果赋值给变量 score，并将变量 grade
的值输出到屏幕上。
注：变量数据类型的选择应适当，在保证满足设计要求精度的情况下，养成不浪费内存空间和计算时间
的好习惯。*/

/*
do-while循环
先执行循环中的语句，
然后再判断表达式是否为真，如果为真则继续循环；
如果为假，则终止循环。
因此，do-while循环至少要执行一次循环语句。其执行过程可用下图表示。 
*/
#include <stdio.h>
int main(void)
{
    float score;  //此处修改，按题意成绩定义为float 
	int shi;
    char grade;
    do{
    	printf("Please input the score(0~100):");
    	scanf("%f",&score);  //此处修改float类型输入使用%f占位符 
    }while(score<0||score>100);  //若为真则继续循环
	
	shi=(int)score/10;  //此处修改，强制类型转换成int进行整除运算 ，根据最后输出也可看出强制类型转换不改变原来数据 
	switch(shi){
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'E';
			break;
	}
	printf("score = %.1f,grade = %c\n",score,grade);
    
	    
    return 0;
}
