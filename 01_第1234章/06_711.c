/*用 scanf() 输入圆半径 r、 圆柱高 h，求圆周长 C（C = 2πr） 、圆面积 S（S = πr^2） 、圆柱体积 V（V =πr^2h） 。*/

/*
细节：
1.scanf()函数接收输入， 
格式控制字符串中有非格式字符串，则按原样输入。如A=%d,b=%c
若格式控制字符串中没有非格式字符，作输入数据之间的间隔，则可用空格、Tab、回车作间隔。如%d%c
*/
#include <stdio.h>
int main(void)
{
    int r,h;
    float C,S,V;
    float PI = 3.14;
    
	printf("Input:");
    scanf("r=%d,h=%d",&r,&h);
    C = 2*PI*r;
    S = PI*r*r;
    V = S*h;
    printf("\nC=%.2f\nS=%.2f\nV=%.2f\n",C,S,V);
    
    return 0;
}
