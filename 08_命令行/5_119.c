/*����������������������ʽΪ�� P119 num1 num2 num3����� num1 + (num2 + num3) �� 2 ֵ֮�ұ��� 3λС������ʾ��ע�����
	1. �⺯����ʾ�� atoi()�� atof()��
	2. �������и�ʽ����ȷ������������Ϊ 4��ʱ��Ӧ����
	3. ����ķ���ֵ������ main() ���� return ��ֵ�ͳ���ʹ�� exit() ��ֹ����ʱ���ص�ֵ��Ҳ���˳����룩
	�涨Ϊ��
	a) �������н���ʱ������ 0��
	b) �����и�ʽ���ԣ����� 8��*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    double num1,num2,num3,res;  ////��num1ʹ��int���Ͷ��岢��atoi()��ֵ 
    
	if(argc!=4){
		printf("Input error.\n");
		printf("Usage:5_119 num1 num2 num3\n");
		exit(8);
	}
    num1=atof(argv[1]);
    num2=atof(argv[2]);
    num3=atof(argv[3]);
    res=num1+(num2+num3)/2;
    printf("%.3f + (%.3f + %.3f) �� 2 = %.3f",num1,num2,num3,res);
    return 0;
}
