/*����Ĺ����ǣ� �ҳ������һ�� m �� n ����ÿһ���ϵ����ֵ�����±겢��ʾ����ʽҪ����ʾ�� m�� n��2 �� m �� 20�� 2 �� n �� 20��������Ԫ�شӼ�������*/

#include <stdio.h>

#define N 20

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void maxColSubscript(int array[20][20],int m,int n);

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n: ");
	scanf("%d%d", &m, &n);

	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (hang = 0; hang < m; hang++)
	{
		for (lie = 0; lie < n; lie++)
		{
			scanf("%d", &juZhen[hang][lie]);
		}
	}
	puts("");

	maxColSubscript(juZhen,m,n);//______________________________  /* userCode(<50�ַ�): ���ú����ҳ�ÿһ���ϵ����ֵ�����±겢��ʾ����ʽҪ����ʾ */
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void maxColSubscript(int array[20][20],int m,int n){
	int i,j,max,maxColj;
	for(i=0;i<m;i++){
		max=array[i][0];  //>>>�ٶ����ֵΪ���е�0Ԫ�� 
		maxColj=0;   //>>>�ٶ����ֵ������Ϊ��0�� 
		for(j=1;j<n;j++){
			if(max<array[i][j]){  //>>>���if����else{maxColj[i]=0} �ˣ�����ѭ��������һ�У�
				max=array[i][j];  //>>>��������д�ľ͸ı����ֵ�����������±꣬����û�д�ľͱ���maxColj[i]=0���� 
				maxColj=j;
			}
		}
		printf("The max value in line %d is %d\n",i,maxColj);  //>>>�˴��Ķ����Ա��н��б���ʱֱ�������һ�е����ֵ���±� �������������鱣��ÿ�����ֵ���±� 
	}
}

 
