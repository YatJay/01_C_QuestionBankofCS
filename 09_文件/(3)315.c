/*��������ʱ���ȴӼ�������һ���ı��ļ����ļ�����Լ�����ַ��� �� 127 �ֽڣ��ɺ�·����
	��һ���ַ�����Լ�����ַ��� �� 20 �ֽڣ����в����ո� TAB �ȣ������֮Ϊ Str����������Ļ����ʾ���ļ������ݡ�
	Ҫ����ʾ�����ݺ�����Ļ������ļ�����������֮���� '\n' Ϊ�ָ���ÿ�еĳ��Ȳ������� �� 200 ���ֽڣ����ַ��� Str ���ļ��е� 1 �γ��ֵ��к�
	�����һ�γ��ֵ��кţ�����ʱ�����ִ�Сд�������в��ң���δ�ҵ������к���ʾΪ -1����
�ѳ�������ʱ�����õ��ļ���Test.txt�� �����������ļ����ݣ� ���浽�����*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fp;
    char fname[128],ch;
    int row;
    
    printf("Please input the file name:");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL){
    	printf("Open file error.");
    	exit(0);
	}
    
    
    fclose(fp);
    return 0;
}
