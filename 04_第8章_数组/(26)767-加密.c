/*�Ӽ��̶���һ���ַ���Լ�����ַ��� �� 127 �ֽڣ����еĿո񲻹̶����ж����٣��ͼ��ܼ�����ٶ�ֻ�������������������ܺ�����������
	������ܷ���ʾ��Ϊ���������롰1 2 3 4 5 6 7 8 9abcd ef ghiA BCD EFG HI XYZ�������ܼ��Ϊ9��
	��ȥ�������еĿո�����Ϊ�� 123456789abcdefghiABCDEFGHIXYZ��Ȼ�󰴼�� 9 ���飺
		123456789
		abcdefghi
		ABCDEFGHI
		XYZ
	�������ķ���Ϊ���ӵ� 1 �鿪ʼ�����δ�ÿ���ȡ 1 �ַ������ÿһ��ȡ������һ���ո�������
	������������Ϊ�� 1aAX 2bBY 3cCZ 4dD 5eE 6fF 7gG 8hH 9iI��*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str0[128],str1[128];
    int i,j,m,n,len;
    printf("Please input a string: ");
    gets(str0);
    printf("Please input n for gap: ");
    scanf("%d",&m);
    
    for(i=0,j=0;str0[i]!='\0';i++){
    	if(str0[i]!=' '){
    		str1[j]=str0[i];
    		j++;
		}
	}
	str1[j]='\0';
	printf("Delete the space: %s\n",str1);
	
	printf("The string after gap: \n");
	for(i=0;str1[i]!='\0';i++){
		if((i+1)%n==0){
			printf("%c\n",str1[i]);
		}
		else{
			printf("%c",str1[i]);
		}
	}
	
	len=strlen(str1);
	n=len/m+1;
	printf("The result is :");
	for(i=0;str1[i]!='\0';i++){
		
	}
	
    
    
    return 0;
}
