/*从键盘读入一个等级成绩，输出对应的百分制成绩。
A→95、 
B→85、 
C→75、 
D→65、 
E→55、 
F→45、 
G→35、 
H→25、 
I→15、 
J→0。若输入的等级成绩非A ~ J，则输出“Error” 。*/
#include <stdio.h>
int main(void)
{
    char grade;
    int score;
    printf("please input the grade: ");
    grade = getchar();
    switch (grade)
    {
    case 'A':
        score = 95;
        break;
    case 'B':
        score = 85;
        break;
    case 'C' : score = 75;
        break;
    case 'D':
        score = 65;
        break;
    case 'E':
        score = 55;
        break;
    case 'F':
        score = 45;
        break;
    case 'G':
        score = 35;
        break;
    case 'H':
        score = 25;
        break;
    case 'I':
        score = 15;
        break;
    case 'J':
        score = 0;
        break;
    default:
        printf("\ngrade=%c Error\n", grade);
        //return 0; 
    }
    printf("\ngrade=%c, score=%d\n", grade, score);
    return 0;
}
