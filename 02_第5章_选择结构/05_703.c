/*已知某公司员工的保底薪水为 500，某月所接工程的利润 profit（整数）与利润提成的关系如下（计量
单位：元）：
profit ≤ 1000 没有提成；
1000 < profit ≤ 2000 提成 10%；
2000 < profit ≤ 5000 提成 15%；
5000 < profit ≤ 10000 提成 20%；
10000 < profit 提成 25%。
请根据输入的利润计算员工的薪水*/
#include <stdio.h>
int main(void)
{
    int profit;
    float tc,salary;
    
    printf("Input profit:\n");
    scanf("%d",&profit);
    if(profit<=1000) tc = 0;
    if(profit>1000&&profit<=2000) tc = 0.1*profit;
    if(profit>2000&&profit<=5000) tc = 0.15*profit;
    if(profit>5000&&profit<=10000) tc = 0.2*profit;
    if(profit>10000) tc = 0.25*profit;
    
    salary = 500+tc;
    printf("salary = %.2f\n",salary);
    return 0;
}
