/*���ı��ļ���Comp.txt�� ������Ҫ��������������ʽ��ÿ����ʽռһ�����ļ���ֻ��һ����ʽ��
	��������ֻ�С��ӷ���+�������ߡ�������-�����������ǰ��������һ���ո�
	�������ʽ�Ľ��������Ļ����ʾ���ѳ�������ʱ�����õ���ʽ�ļ���Comp.txt�� �����������ļ����ݣ�
 ���ӷ�ʾ�������ʱ��Ӧ������ʽΪ��������������浽���� P320.c ���ڵ��ļ������ļ������ֲ���*/
 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,res;
    char op;
    
    fp=fopen("Comp.txt","r");
    if(fp==NULL){
    	printf("File open error!");
    	exit(0);
	}
	
	fscanf(fp,"%d %c %d",&a,&op,&b);  //%c�������ַ�����ʱ������ʽ�����ַ������޷Ǹ�ʽ�ַ�������Ϊ����������ַ���Ϊ��Ч�ַ����ո�ᱻ�����ַ���ֵ��������
	switch(op){
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		default:
			break;
	}
    printf("\n%d %c %d = %d",a,op,b,res);
    fclose(fp);
    return 0;
}
