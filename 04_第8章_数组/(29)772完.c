/*�ԴӼ��������һ���ַ���Լ�����ַ��� �� 127 �ֽڣ��������򣨰�ÿ���ַ��� ASCII ����С���󣩲������
ע�������в���ʹ�ÿ⺯�� gets()�� fgets() ��ʹ��ͬ���ı��������������ʡ�*/

/*
�ַ���������
	�ַ���ASCII�����ʽ�洢�������Ͼ������֣���˶��ַ���������ʱֱ�ӵ������ִ���-�Ƚϴ�С 
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128],c,temp;
    int i,j,len;
    printf("Please input a line of character: ");
    for(i=0;;i++){
    	c=getchar();
    	if(c!='\n'){
    		str[i]=c;
		}
		else{
			break;
		}
	}
	str[i]='\0';
	
	printf("The string before sorted:");
	for(i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	} 
	printf("\n");
	
	len=strlen(str);
	for(j=1;j<=len-1;j++){
		for(i=0;i<=len-j-1;i++){
			if(str[i]>str[i+1]){
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
			}
		}
	}
	
	printf("The string after sorted:");
	for(i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	} 
	
	
    
    return 0;
}
