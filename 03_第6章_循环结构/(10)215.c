/*�� S = 1/1! +1/2! +1/3! + �� +1/ N! ������������ʾʱС������ռ 16 λ������ʱҪ��ӵ� 1 �ʼ��
���ۼӣ��� N Ϊ������Ȼ����ֻ���� int �ͣ����Ӽ��̶��롣*/
#include <stdio.h>
int main(void)
{
    int num, i;
	double fac = 1, sum = 0;
	printf("Please input n: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++){
		fac *= i; //������ֵ����ֱ������ʹ�� �� 
		sum += 1 / fac;
}
	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f\n", num, sum);
    
    return 0;
}
