/*���������ε����߳� a�� b�� c���߳�������С����������������� area���������
�����������߹����������Σ�Ӧ������data error������Ϣ��ʾ��*/

/*
ϸ�ڣ�
1.sqrt()������math.hͷ�ļ�
2.sqrt()�����Ĳ����ͷ���ֵ����double���ͣ����Դ�float��ȥ�����ص���double���ͣ���Ҫ�Է���ֵǿ������ת����Ϊfloat 
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
