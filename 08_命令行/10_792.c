/*������������������ַ�������С�����˳������������
ע�����
	1. �����и�ʽΪ�� P792 str1 str2 str3���������и�ʽ����ȷ������������Ϊ 4��ʱ��Ӧ����
	2. ����ķ���ֵ������ main() ���� return ��ֵ�ͳ���ʹ�� exit() ��ֹ����ʱ���ص�ֵ��Ҳ���˳����룩
�涨Ϊ��
	a) �������н���ʱ������ 0��
	b) �����и�ʽ���ԣ����� 1��*/

/*
strcmp()�Ƚ��ַ��������ִ�Сд������ԭ��Ϊ��
    ��ԭ�͡�int strcmp(const char *s1, const char *s2);
	��������s1, s2 Ϊ��Ҫ�Ƚϵ������ַ�����
		�ַ�����С�ıȽ�����ASCII ����ϵ�˳������������˳����Ϊ�ַ���ֵ��
		strcmp()���Ƚ�s1 ��һ���ַ�ֵ��ȥs2 ��һ���ַ�ֵ������ֵΪ0 ���ټ����Ƚ��¸��ַ�������ֵ��Ϊ0 �򽫲�ֵ���ء�
		�����ַ���"Ac"��"ba"�Ƚ���᷵���ַ�"A"(65)��'b'(98)�Ĳ�ֵ(��33)��
	������ֵ��������s1 ��s2 �ַ�����ͬ�򷵻�0��s1 ������s2 �򷵻ش���0 ��ֵ��s1 ��С��s2 �򷵻�С��0 ��ֵ��
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    char *str[3],*temp;
    int i,j;
	if(argc!=4){
		printf("Input error.\n");
		printf("Usage:10_792 str1 str2 str3\n");
		exit(0);
	}
    str[0]=argv[1];
    str[1]=argv[2];
    str[2]=argv[3];
    
    printf("%s\n",str[0]);
    printf("%s\n",str[1]);
    printf("%s\n",str[2]);
    
    for(i=0;i<=3-1;i++){
    	for(j=0;j<=3-i-1;j++){
    		if(strcmp(str[j],str[j+1])>0){
    			temp=str[j];
    			str[j]=str[j+1];
    			str[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<3;i++){
		printf("%s\n",str[i]);
	}
    
    return 0;
}
