/*�ַ�����abcd��ÿ���ַ���������λ�����ҵ����ƶ�����һ���ַ���λ�ã��ͱ�Ϊ��dabc�������Ϊ�Դ�����λ��Ϊ 1 ���ֻ���
ͬ����abcd����Ϊ��cdab�����Ϊλ��Ϊ 2 ���ֻ���
Ҫ��Ӽ��̶���һ���ַ��� str��Լ���ַ������ַ��� �� 80 �ֽڣ��ַ����п����пո񣩺���Ҫλ�Ƶ�ֵ n��n > str �ĳ���ʱ��ѭ��λ�ƣ���
����Ը��ַ�������λ��Ϊ n ���ֻ������*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[80],str2[80];
	int i,j,n,len;
	printf("Please input a string: ");
	gets(str1);
	printf("Please input n: ");
	scanf("%d",&n);
	
	len=strlen(str1);
	n=n%len;
	
	for(i=len-n,j=0;str1[i]!='\0';i++){
		str2[j]=str1[i];
		j++;
	}
	for(i=0;i<len-n;i++){
		str2[j]=str1[i];
		j++;
	}
	str2[j]='\0';
	
	printf("%s",str2);
    
    return 0;
}
