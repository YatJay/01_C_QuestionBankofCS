/*输入三角形的三边长 a、 b、 c（边长可以是小数），求三角形面积 area，并输出。
如果输入的三边构不成三角形，应给出“data error”的信息提示。*/

/*
细节：
1.sqrt()函数在math.h头文件
2.sqrt()函数的参数和返回值都是double类型，可以传float进去，返回的是double类型，需要对返回值强制类型转换成为float 
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,area,p;
    double temp;
    printf("Please input the length of a triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
    	p=(a+b+c)/2;
    	area=(float)sqrt(p*(p-a)*(p-b)*(p-c));
    	printf("The area of this triangle is %.2f",area);
	}
	else printf("data error!\n");
    
    return 0;
}
