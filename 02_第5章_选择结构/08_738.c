/*�Ӽ�������������ʵ��������������ʵ�����̣�ǰ��������Ժ��������*/
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
