/*�Ӽ�������һ��������ı߳������ͣ�������������������ͱ����*/
#include <stdio.h>
int main(void)
{
    int l,v,s;
    printf("Input a side of cube: ");
    scanf("%d",&l);
    v = l*l*l;
    s = 6*l*l;
    printf("\nThe volume of cube is %d, the surface area of cube is %d.\n",v,s);
    return 0;
}
