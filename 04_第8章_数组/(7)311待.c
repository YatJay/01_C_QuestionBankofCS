/*���ʵ�����й��ܣ� 
1. �Ӽ������Ⱥ���������ַ������ٶ��洢���ַ����� s1 �� s2 �С�
	ע�⣬�������ַ�������ɴﵽ 127 ���ַ�����̾���Ϊ 0 ���ַ���
2. ���ַ��� s2 �����ַ��� s1 �У����뷽��Ϊ�� 
	s2 �ĵ� i ���ַ����뵽ԭ s1 �ĵ� i ���ַ���
	��� s2�� s1���ٶ� s1 �ĳ���Ϊ L1�������� s2�ĵ� L1 ���ַ���ʼ�� s2��β�������ַ����� s2�е�˳����������ɵ� s1 �� 
	���磬 s1 ����Ϊ��123456789���� s2 ����Ϊ��abcdefghijk����������� s1 Ϊ��1a2b3c4d5e6f7g8h9ijk����
3. ����Ļ����������ɵ� s1��*/
#include <stdio.h>
int main(void)
{
    char str1[128],str2[128],s1[256];
    int len1,len2,i;
    printf("Please input the string1: ");
    gets(str1);
    printf("Please input the string2: ");
    gets(str2);
    
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;str1[i]!='\0';i++){
    	temp=str1[i+1];
    	str1[i+1]=str2[i];
	}
    return 0;
}
