/*输入实型数据 a、 b，然后输出 a、 b 的值*/
/*
细节： 
实型数据也称为浮点数或实数。
在C语言中，实数只采用十进制。
它有二种形式：十进制小数形式和指数形式。

c语言中double类型数据的输入和输出————尽量用float，double类型输入输出B事情太多 
double a;
scanf("%f",&a);   //应该用scanf("%lf",&a);
执行上面语句时，发现double类型的输入不能使用%f进行输入，得用%lf才能正常得到a的值。
而在输出double类型时却可以用%f，这是因为printf("%f",a);在执行时C自动将double型的参数转换成flaot型。
故double型的输入输出形式如下：

double a;
scanf("%lf",&a);
printf("%f",a);
*/
#include <stdio.h>
int main(void)
{
    float a,b;
    printf("Please input two numbers:");
    scanf("%f %f",&a,&b);
    printf("%.6f\n%.6f",a,b);
    
    return 0;
}
