/*����һ�򵥵ļ������� ע�����
	1. ��Ҫ��������ݴ����������룬��ʽΪ�� P115 num1 op num2���������и�ʽ����ȷ������������Ϊ 4��ʱ��Ӧ����
	2. op ��ȡֵ��ΧΪ��+�� ��-����*����/����%�� �������˷�Χ��Ӧ����
	3. num1 �� num2��Ϊ������int���� op Ϊ��+����-�� ��*��ʱ���������������� int ���ܱ�ʾ�ķ�Χ��op Ϊ��/�� ��%��ʱ�����ǳ���Ϊ 0 ��������� op Ϊ��/��ʱ������Ӧ���� 2 λС����
	4. ����ķ���ֵ������ main() ���� return ��ֵ�ͳ���ʹ�� exit() ��ֹ����ʱ���ص�ֵ��Ҳ���˳����룩
	�涨Ϊ��
	a) �������н���ʱ������ 0��
	b) �����и�ʽ���ԣ����� 1��
	c) op ������Χʱ������ 2��*/

/*
atoi()�����ַ���ת��Ϊ���� 
	ԭ�ͣ�int atoi(const char *str) 
	���ܣ��Ѳ��� str ��ָ����ַ���ת��Ϊһ������������Ϊ int �ͣ���
2.int main(int argc,char *argv[])�����д��ݲ��� 
	�����в�����ʹ�� main() ��������������ģ����У�argc ��ָ��������ĸ�����argv[] ��һ��ָ�����飬ָ�򴫵ݸ������ÿ��������
*/

#include <stdio.h>
#include <stdlib.h> 
int main(int argc,char *argv[]){
    char op;
    int num1,num2;
    if(argc!=4){
    	printf("Input error.\n");
    	exit(1);
	}
	
	num1=atoi(argv[1]);
	op=*argv[2];
    num2=atoi(argv[3]);
	switch(op){
		case '+':
			printf("%d %c %d = %d",num1,op,num2,num1+num2);
			break;
		case '-':
			printf("%d %c %d = %d",num1,op,num2,num1-num2);
			break;
		case '*':
			printf("%d %c %d = %d",num1,op,num2,num1*num2);
			break;
		case '/':
			printf("%d %c %d = %.2f",num1,op,num2,(float)num1/num2);
			break;
		case '%':
			printf("%d %c %d = %d",num1,op,num2,num1/num2);
			break;
		default:
			printf("op(%c)error.\n",op);
			exit(2);
	}
    
    return 0;
}
