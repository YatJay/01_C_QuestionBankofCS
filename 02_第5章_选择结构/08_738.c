/*从键盘上输入两个实数，计算这两个实数的商（前面的数除以后面的数）*/
#include <stdio.h>
int main(void)
{
    float a,b,r;
    
    printf("Please input 2 data:  ");
    scanf("%f %f",&a,&b);
    if(b==0) printf("Divede by zero\n");
    else{
    	r=a/b;
		printf("The result is %.2f\n",r); 
	} 
    
    return 0;
}
