/*�Ӽ������� x�� y�� z ��ֵ����д����������±��ʽ��ֵ�� x + z % 3 * (int)(x + y) % 2 / 4��*/
/*
ϸ�ڣ�
1.�����б���z��Ҫ�μ�ȡ�����㣬������Ҫ����Ϊint����
2.ע��������˳������ 
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
