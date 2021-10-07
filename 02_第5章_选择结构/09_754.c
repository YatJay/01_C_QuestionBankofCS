/*从键盘输入一个一百分制成绩（无小数），将输入的数据转换成等级“ABCDEFGHIJX” 。
90 ~ 100→A， 
80 ~ 89→B， 
70 ~ 79→C， 
60 ~ 69→D， 
50 ~ 59→E， 
40 ~ 49→F， 
30 ~ 39→G， 
20 ~ 29→H， 
10 ~ 19→I， 
0 ~ 9→J， 其它输入超正常范围分数的则为 X。*/

/*
详细见本题改中用switch()语句进行巧妙判断 
*/
#include <stdio.h>
int main(void)
{
    int score;
    char grade;
    printf("Please input the score(0~100): ");
    scanf("%d",&score);
    if(score>=90&&score<=100) grade = 'A';
    else if(score>=80&&score<=89) grade = 'B';
    else if(score>=70&&score<=79) grade = 'C';
    else if(score>=60&&score<=69) grade = 'D';
    else if(score>=50&&score<=59) grade = 'E';
    else if(score>=40&&score<=49) grade = 'F';
    else if(score>=30&&score<=39) grade = 'G';
    else if(score>=20&&score<=29) grade = 'H';
    else if(score>=10&&score<=19) grade = 'I';
    else if(score>=0&&score<=9) grade = 'J';
    else grade = 'X';
    printf("score = %d,grade = %c\n",score,grade);
    
    return 0;
}
