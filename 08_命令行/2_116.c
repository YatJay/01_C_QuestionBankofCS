/*����������������ʵ������ʽΪ�� P116 num1 num2����� (num1 + num2) �� 2 ֵ֮�ұ��� 3 λС������ʾ��ע�����
	1. �⺯����ʾ�� atof()��
	2. �������и�ʽ����ȷ������������Ϊ 3��ʱ��Ӧ����
	3. ����ķ���ֵ������ main() ���� return ��ֵ�ͳ���ʹ�� exit() ��ֹ����ʱ���ص�ֵ��Ҳ���˳����룩
	�涨Ϊ��
	a) �������н���ʱ������ 0��
	b) �����и�ʽ���ԣ����� 9��*/
	
/*
atof()���ַ���ת��Ϊ������������ֵΪdouble 
	ԭ�ͣ�double atof(const char *str) 
	���ܣ��Ѳ��� str ��ָ����ַ���ת��Ϊһ��������������Ϊ double �ͣ���
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    double num1,num2,res;
    
	if(argc!=3){
		printf("Input error.\n");
		printf("Usage:2_116 num1 num2\n");
		exit(9);
	}
    num1=atof(argv[1]);
    num2=atof(argv[2]);
    res=(num1+num2)/2;
    printf("(%.3f + %.3f) ��2 = %.3f",num1,num2,res);
    return 0;
}
