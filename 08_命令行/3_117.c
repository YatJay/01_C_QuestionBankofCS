/*����������������ʵ������ʽΪ�� P117 num1 num2����� (num1 - num1) �� 3 ֵ֮�ұ��� 3 λС������ʾ��ע�����
	1. �⺯����ʾ�� atof��
	2. �������и�ʽ����ȷ������������Ϊ 3��ʱ��Ӧ����
	3. ����ķ���ֵ������ main() ���� return ��ֵ�ͳ���ʹ�� exit() ��ֹ����ʱ���ص�ֵ��Ҳ���˳����룩
	�涨Ϊ��
	a) �������н���ʱ������ 0��
	b) �����и�ʽ���ԣ����� 76��*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    double num1,num2,res;
    
	if(argc!=3){
		printf("Input error.\n");
		printf("Usage:3_117 num1 num2\n");
		exit(76);
	}
    num1=atof(argv[1]);
    num2=atof(argv[2]);
    res=(num1-num2)*3;
    printf("(%.3f - %.3f) * 3 = %.3f",num1,num2,res);
    return 0;
}
