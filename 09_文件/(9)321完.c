/*���ı��ļ���Comp.txt�� ������Ҫ��������������ʽ��
	ÿ����ʽռһ�����ļ����ж����������ȷ������ʽ����������ֻ�С��ӷ���+�������ߡ�������-�����������ǰ��������һ���ո� 
	������Щ��ʽ�Ľ��������Ļ����ʾ��*/

/*
ֻҪ������Ļ����ʾ������Ҫ�󽫽�������Դ�ļ����� 
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,res,i=1;
    char op;
    
    fp=fopen("Comp321.txt","a+");
    if(fp==NULL){
    	printf("File open error!");
    	exit(0);
	}
	while(!feof(fp)){
		if(fscanf(fp,"%d %c %d",&a,&op,&b)==3){
			switch(op){
			case '+':
				res=a+b;
				break;
			case '-':
				res=a-b;
				break;
			default:
				printf("\nInput error!");
				break;
			}
			printf("\nL00%d:%d %c %d = %d",i,a,op,b,res);
			i++;
		}
		
	}
	
    
    fclose(fp);
    return 0;
}
