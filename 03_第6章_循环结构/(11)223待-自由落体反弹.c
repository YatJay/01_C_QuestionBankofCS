/*һ����� 10000 m �߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ�룬�����£��ٷ����������ڵ� n��n
�Ӽ������룩�����ʱ�������������ף� �� n �η�����ߡ�*/
#include <stdio.h>
int main(void)
{
	int num, i;
	double hn = 10000, sn = 10000;
	printf("Please input n: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++){
		hn /= 2;
		sn += hn * 2;
	}
	sn -= hn * 2;
	printf("\nsn=%f,hn=%f\n", sn, hn);
    
    return 0;
}
