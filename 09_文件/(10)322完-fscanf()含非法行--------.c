/*���ı��ļ���Comp.txt��������Ҫ��������������ʽ��ÿ����ʽռһ�����ļ����ж����ʽ��
��������ֻ�С��ӷ���+�������ߡ�������-�����������ǰ��������һ���ո񡪡�
�����п����п��кͲ�����Ҫ�����ʽ�������г��϶������� 200 �ֽڣ���
������Щ��ʽ�Ľ��������Ļ����ʾ�����в����κδ���������Ҫ�����ʽ����ʾ��Error!�� ��*/

/*
ע�⣺
1.sscanf()�������ڴ��ַ����ж�ȡָ����ʽ������
    ��ԭ�͡�int sscanf (char *str, char * format [, argument, ...]);
	������������strΪҪ��ȡ���ݵ��ַ�����formatΪ�û�ָ���ĸ�ʽ��argumentΪ���������������ȡ�������ݡ�
	������ֵ���ɹ��򷵻ز�����Ŀ��ʧ���򷵻�-1������ԭ�����errno �С�
	sscanf()�Ὣ����str ���ַ������ݲ���format����ʽ���ַ�������ת������ʽ�����ݣ���ʽ���ַ�����ο�scanf()���� ת����Ľ�����ڶ�Ӧ�ı����С�
	sscanf()��scanf()���ƣ�������������ģ�ֻ��scanf()�Լ���(stdin)Ϊ����Դ��sscanf()�Թ̶��ַ���Ϊ����Դ��
2.����Ϊ���ȵ���fgets()��һ�����ݶ��뵽buff���ٶ�buff�ַ�������sscanf()��ʽ����ȡ�� 
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,res,i;
    char op;
    char buff[201];
    
    fp=fopen("Comp322.txt","r");
    if(fp==NULL){
    	printf("Open file error.\n");
    	exit(0);
	}
	
	i=1;
	while(!feof(fp)){
		if(fgets(buff,201,fp)==NULL){  //
			break;
		}
		if(sscanf(buff,"%d %c %d",&a,&op,&b)==3){
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
			printf("L00%d:%d %c %d = %d\n",i,a,op,b,res);
		}
		else{
			printf("L00%d:Error!\n",i);
		}
		i++;
	}
    
    fclose(fp);
    return 0;
}
