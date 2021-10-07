/*从键盘输入 x、 y、 z 的值，编写程序输出以下表达式的值： x + z % 3 * (int)(x + y) % 2 / 4。*/
/*
细节：
1.本题中变量z需要参加取余运算，所以需要定义为int类型
2.注意运算结合顺序问题 
*/
#include <stdio.h>
int main(void)
{
    float x,y;
	int z;
    float result;
    printf("Please input x,y,z\n");
    scanf("%f %f %f",&x,&y,&z);
    result = x + z % 3 * (int)(x + y) % 2 / 4;
    printf("The result = %.6f",result);
    
    return 0;
}
