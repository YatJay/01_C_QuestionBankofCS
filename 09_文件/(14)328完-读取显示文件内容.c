/*��������ʱ���ȴӼ�������һ���ı��ļ����ļ�����Լ�����ַ��� �� 127 �ֽڣ��ɺ�·������������Ļ����ʾ���ļ�������*/

/*
1.fp=fopen(fname,"r"); fopen()�е��ļ������ֿ���д�ַ�������(��C�����ַ������ַ���ַ�ָ��) 
2.ѭ�����������ʾ�ļ��̶���ʽ ���������ǽ��ı��ļ��������ַ�����fget()��ȡ������ʲô�����ʲô��ֱ����ȡ���ļ�ĩβ 
	while ((ch=fgetc(fp))!=EOF){  //�̶���ѭ�������ļ�ʹ�� 
		putchar(ch);
	}
*/

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
		putchar(ch);
	}
    
    fclose(fp);
    return 0;
}
