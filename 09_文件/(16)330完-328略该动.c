/*��������ʱ���ȴӼ�������һ���ı��ļ����ļ�����Լ�����ַ��� �� 127 �ֽڣ��ɺ�·������������Ļ����ʾ���ļ������ݡ� ע�⣬�����ļ��е��ַ���*�� ������Ļ�ϸ�Ϊ��ʾ�ַ���@�� ��*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char fname[128];
    char ch;
    
    printf("Input the file name: ");
    scanf("%s",fname);  //>>��ʹ��gets(fname) [#include string.h]
    fp=fopen(fname,"r");
    if(fp==NULL){
    	printf("File open error.");
    	exit(0);
	}
	
	printf("------------------------File Begin:----------------------\n");
	while ((ch=fgetc(fp))!=EOF){  //�̶���ѭ�������ļ�ʹ�� 
		if(ch=='*'){
			putchar('@');
		}
		else{
			putchar(ch);
		}
	}
    
    fclose(fp);
    return 0;
}
