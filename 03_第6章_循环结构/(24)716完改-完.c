/*�� s = a + aa + aaa + aaaa + aa��a ��ֵ������ a ��һ�����֣���ȡ 1 ~ 9 ֮���һ��ֵ����
���� 2 + 22+ 222 + 2222 + 22222����ʱ���� 5 ������ӣ������� a ֵ���м���������ɼ���������ơ�
ע�� s ��ֵ�п��ܳ��� int �ķ�Χ��*/
#include <stdio.h>
int main(void)
{
	int an,num,i;
	double sum = 0, bn = 0;
	printf("Please input a,n: ");
	scanf("%d %d", &an, &num);
	
	bn=an;  //an��Ϊ��λ�����ֲ��������䶯����������bn��ÿ��ѭ����bn���䶯���ɣ�bn����ÿ������ 
	for (i = 1; i <= num; i++){
		sum += bn;
		bn = bn*10+an;
	}
	printf("\na+aa+...=%.0f\n", sum);
	return 0;
}
