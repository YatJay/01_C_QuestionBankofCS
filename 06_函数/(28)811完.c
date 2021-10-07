/*程序的功能是：输入三角形的三边长 a、 b、 c，求三角形面积 area，并输出。如果输入的三边构不成三
角形，应给出“data error”的信息提示。
注：根据“海伦－秦九韶”公式， area =根号下 p (p - a) (p - b) (p - c)，其中 p = a + 2b + c。*/

#include <math.h>
#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
double triangleArea(double a,double b,double c);

int main(void)
{
	double bianA, bianB, bianC, mianJi;

	printf("please input triange sides: ");
	scanf("%lf,%lf,%lf", &bianA, &bianB, &bianC);

	if (bianA<0 || bianB<0 || bianC<0
			|| (bianA+bianB <= bianC) || (bianA+bianC <= bianB) || (bianB+bianC <= bianA))
	{
		printf("\ndata error\n");
	}
	else
	{
		mianJi=triangleArea(bianA, bianB, bianC);//______________________________  /* userCode(<50字符): 调用函数计算三角形面积 */
		printf("\narea=%.2f\n", mianJi);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double triangleArea(double a,double b,double c){
	double p,area;
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));  //sqrt()函数默认返回值就是double类型
	return area; 
}


