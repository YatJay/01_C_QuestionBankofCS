/*����Ĺ����ǣ� �ȴ� main() �������������鳤�� n��Լ�� n �� 20����
�ٵ����Զ��庯�� scanfArr() ��������е�ÿ��Ԫ�ض��룬Ȼ��ֱ�����Զ��庯�� maxArr()�� aver() ��������Ԫ�ص����ֵ��ƽ��ֵ�����������ֵ��ƽ��ֵ��
ע�� Ҫ����ָ����ɺ�������������Ĵ��ݡ��Լ���������Ԫ�صķ��ʣ����Զ��庯��ͷ�ͺ������в��ó��������±���ʽ�ı�ʾ����*/

/*
ע�⣺
1.	*(pdata+i)Ҫ�����ţ������ַ����ȡ��ַ��
	������ӣ�����*�����ȼ����ߣ�����*pdataȡ����ֵ���ٶԸ�����ֵ+i 
2.��������������һ��ָ�볣����ָ�������׵�ַ 
3.���� p=&a[0];	for(i=1;i<n;i++){	*(p+i);	}��������֮�⻹����ʹ�ã�
 		for(p=&a[0];p<a+n;p++){	*p;	}
*/
#include <stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=3, lineLen<=80, �������ڱ��к���Ӵ��롢���3�С��г�<=80�ַ�) */
void scanfArr(int *pdata,int n);
int maxArr(int *pdata,int n);
double aver(int *pdata,int n);


/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int Data[20], n, max;
	double average;

	printf("Please input the number n = ");
	scanf("%d", &n);
	printf("Please input the array elements : ");
	scanfArr(Data, n);

	max = maxArr(Data, n);
	average = aver(Data, n);
	printf("\nmax = %d\naverage = %.2f\n", max, average);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void scanfArr(int *pdata,int n){
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d",pdata+i);
//	}
	//������ʹ����һ��ָ�뷽ʽ����������� 
	int *pdata0=pdata;  //���������׵�ַ 
	for(pdata;pdata<pdata0+n;pdata++){
		scanf("%d",pdata);
	}
}

int maxArr(int *pdata,int n){
	int max=*pdata,i;
	for(i=1;i<n;i++){
		if(max<*(pdata+i)){   //ע��*(pdata+i)Ҫ�����ţ������ַ����ȡ��ַ��������ӣ�*�����ȼ����ߣ�����*pdata���ٶ���+i 
			max=*(pdata+i);
		}
	}
	return max;
}

double aver(int *pdata,int n){
	double avg;
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=*(pdata+i);
	}
	avg=(double)sum/n;
	return avg;
}

