/*从键盘输入一个正三角形的边长（整型），计算该三角形的面积和周长*/

/*
细节：
1. 表达式结果赋值给变量，先计算表达式，再赋值，因此在表达式中就要做好预期的结果数据类型，比如此处 p = (float)l/2
2.sqrt()函数 

sqrt() 用来求给定值的平方根，其原型为：
    
	double sqrt(double x);  即其返回值是一个double类型 

  【参数】x 为要计算平方根的值。

  如果 x < 0，将会导致 domain error 错误，并把全局变量 errno 的值为设置为 EDOM。

3.float和double类型的区别：
C语言中float和double的区别

double、float都是浮点型。
double（双精度型）比float（单精度型）存的数据更准确些，占的空间也更大。
double精度是float的两倍，所以需要更精确的计算常使用double。

单精度浮点数在机内占4个字节，用32位二进制描述。
双精度浮点数在机内占8个字节，用64位二进制描述。

浮点数在机内用指数型式表示，分解为：数符，尾数，指数符，指数四部分。
数符占1位二进制，表示数的正负。
指数符占1位二进制，表示指数的正负。
尾数表示浮点数有效数字，0.xxxxxxx,但不存开头的0和点
指数存指数的有效数字。

指数占多少位，尾数占多少位，由计算机系统决定。
可能是数符加尾数占24位，指数符加指数占8位 -- float.
数符加尾数占48位，指数符加指数占16位 -- double.

知道了这四部分的占位，按二进制估计大小范围，再换算为十进制，就是你想知道的数值范围。

对编程人员来说，double 和 float 的区别是double精度高，有效数字16位，float精度7位。
但double消耗内存是float的两倍，double的运算速度比float慢得多，C语言中数学函数名称double 和 float不同，不要写错，能用单精度时不要用双精度（以省内存，加快运算速度）。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,l;
    float p,s;
    printf("Input a side of a triangle:");
    scanf("%d",&a);
    l = 3*a;
    p = (float)l/2;  //表达式结果赋给p，若不加(float)则表达式结果为整型，不符合题意 
    s = sqrt(p*(p-a)*(p-a)*(p-a));
    printf("\nThe area of triangle is %.2f, the circle of triangle is %d.",s,l);
    
    return 0;
}
