/*����Ĺ����ǣ����������ε����߳� a�� b�� c������������� area��������������������߹�������
���Σ�Ӧ������data error������Ϣ��ʾ��
ע�����ݡ����ף��ؾ��ء���ʽ�� area =������ p (p - a) (p - b) (p - c)������ p = a + 2b + c��*/

#include <math.h>
#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
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
		mianJi=triangleArea(bianA, bianB, bianC);//______________________________  /* userCode(<50�ַ�): ���ú���������������� */
		printf("\narea=%.2f\n", mianJi);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
double triangleArea(double a,double b,double c){
	double p,area;
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));  //sqrt()����Ĭ�Ϸ���ֵ����double����
	return area; 
}


