/*����Ĺ����ǣ����������ε����߳� a�� b�� c��Լ��Ϊ������������������� area����������������
�����߹����������Σ�Ӧ������data error������Ϣ��ʾ��
ע�����ݡ����ף��ؾ��ء���ʽ�� area =������ p (p - a) (p - b) (p - c)������ p = a + 2b + c��*/

#include <math.h>
#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
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
		mJi=triangleArea(aBian, bBian, cBian);//______________________________  /* userCode(<50�ַ�): ���ú���������������� */
		printf("\narea=%.2f\n", mJi);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
double triangleArea(int a,int b,int c){
	double p,area;
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));  //sqrt()����Ĭ�Ϸ���ֵ����double����
	return area; 
}
	



