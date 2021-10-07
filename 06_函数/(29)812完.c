/*程序的功能是：输入三角形的三边长 a、 b、 c（约定为整数），求三角形面积 area，并输出。如果输入
的三边构不成三角形，应给出“data error”的信息提示。
注：根据“海伦－秦九韶”公式， area =根号下 p (p - a) (p - b) (p - c)，其中 p = a + 2b + c。*/

#include <math.h>
#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
double triangleArea(int a,int b,int c);

int main(void)
{
	int aBian, bBian, cBian;
	double mJi;

	printf("please input triange sides: ");
	scanf("%d,%d,%d", &aBian, &bBian, &cBian);

	if (aBian<0 || bBian<0 || cBian<0
			|| (aBian+bBian <= cBian) || (aBian+cBian <= bBian) || (bBian+cBian <= aBian))
	{
		printf("\ndata error\n");
	}
	else
	{
		mJi=triangleArea(aBian, bBian, cBian);//______________________________  /* userCode(<50字符): 调用函数计算三角形面积 */
		printf("\narea=%.2f\n", mJi);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double triangleArea(int a,int b,int c){
	double p,area;
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));  //sqrt()函数默认返回值就是double类型
	return area; 
}
	



