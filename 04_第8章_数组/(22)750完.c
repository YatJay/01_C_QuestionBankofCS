/*�����ַ��� s��Լ�����ַ��� �� 100 �ֽڣ������ַ��� s �������ַ���*�� ɾ���������޸ĺ���ַ�����ʾ������*/

#include <stdio.h>
int main(void)
{
    char str0[100],str1[100];
	int i,j;
    printf("Please input a string: ");
    gets(str0);
    for(i=0,j=0;str0[i]!='\0';i++){
    	if(str0[i]!='*'){
    		str1[j]=str0[i];
    		j++;
		}
	}
	str1[j]='\0';
	printf("\nThe result is %s",str1); 
    return 0;
}
