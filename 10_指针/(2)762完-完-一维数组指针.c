/*�����Ĺ���Ϊ���Ӽ��̶��� 10 �������������У��ҳ�����ʾ��СԪ�ؼ����������е�λ�á�*/

/*
�����β��Լ����ݲ���ʱint num[]��int *num�ǵȼ۵� ������ʹ��ʱҲ�ǵȼ۵ģ����Խ�ָ��������[]��Ϊ�������� 
*/

#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
int FindMin(int *num,int n,int *MinPos);

int main(void)
{
	int num[10], i, MinVal, MinPos;

	printf("Input 10 integers: ");
	for (i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}

	MinVal = FindMin(num, 10, &MinPos);
	printf("\nMinVal=%d MinPos=%d\n", MinVal, MinPos);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int FindMin(int *num,int n,int *minpos){   //>>>�����β��Լ����ݲ���ʱint num[]��int *num�ǵȼ۵� 
	int i;
	int minval=num[0];
	*minpos=0;
	for(i=1;i<n;i++){
		if(minval>num[i]){
			minval=num[i];
			*minpos=i;
		}
	}
	return minval;
}
