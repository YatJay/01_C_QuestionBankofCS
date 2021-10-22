/*从键盘读入一个整数 Num，按从小到大的顺序依次输出所有满足条件的 3 位数：该数各位数字的立方和等于 Num。*/

/*
在循环内部做分支结构，会导致所有i都有其对应的输出出口，不符合题目要求 ，
正确做法是设置标志位，预设初始值，找到符合条件的数就输出并将标志位改变 ；未找到就不管该数字，也不变标志位
出循环以后通过判断标志位变化再对未找到情况做输出说明 ，否则在循环内就输出 "未找到"不妥
详细见225改 
*/
#include <stdio.h>
int main(void)
{
    int num,i,ge,shi,bai;
    printf("Please input the number: ");
    scanf("%d",&num);
	for(i=100;i<=999;i++){
		ge = i%10;
		shi = i/10%10;
		bai = i/100;
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai==num) printf("%d\t",i);
		else printf("Not found.\n");  //在循环内部做分支结构，会导致所有i都有其对应的输出出口，不符合题目要求 ，正确做法是设置标志位，预设初始值，找到符合条件的数就将标志位改变 
	}
    
    return 0;
}
