/*���ı��ļ���Comp.txt�� ������Ҫ��������������ʽ��ÿ����ʽռһ�����ļ���ֻ��һ����ʽ��
	��������ֻ�С��ӷ���+���� ��������-���� ���˷���*�����������ǰ��������һ���ո񡣼������ʽ�Ľ��������Ļ����ʾ��*/

/*
�𰸲�ͬ���ڼ�����ʽ�Ĺ����У��𰸶����˼��㺯��Fn�������ʽ���� 
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,c,res;
    char op1,op2;
    
    fp=fopen("Comp323.txt","r");
    if(fp==NULL){
    	printf("File open error!");
    	exit(0);
	}
	
	fscanf(fp,"%d %c %d %c %d",&a,&op1,&b,&op2,&c);
	if(op1=='+'){
		if(op2=='+'){
			res=a+b+c;
		}
		else if(op2=='*'){
			res=a+b*c;
		}
	}
	else if(op1=='*'){
		if(op2=='+'){
			res=a*b+c;
		}
		else if(op2=='*'){
			res=a*b*c;
		}
	}
	
    printf("\n%d %c %d %c %d= %d",a,op1,b,op2,c,res);
    fclose(fp);
    return 0;
}
