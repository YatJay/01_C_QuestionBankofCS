/*���ı��ļ���Comp.txt����CompA.txt����CompB.txt�� ������Ҫ��������������ʽ���ļ���Comp.txt���ṩ�μ�����ĵ�һ�������ļ���CompA.txt�� 
	�ṩ����������������ֻ�С��ӷ���+�������ߡ�������-���������ļ���CompB.txt�� �ṩ�μ�����ĵڶ�������
	ÿ�������������ռһ�У����������Ϊһ����ʽ�������޷����һ��������ʽʱ���������㡣��������ʽ�ж����������ȷ������ 
	������Щ��ʽ�Ľ������������ı��ļ���ʽ���浽���� P325.c ���ڵ��ļ��������ļ�������Ϊ��CompC.txt�� ��*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fp1,*fp2,*fp3,*fpres;
	int a,b,res,i;
	char op;
	
	fp1=fopen("Comp325.txt","r");
	fp2=fopen("Comp325A.txt","r");
	fp3=fopen("Comp325B.txt","r");
	fpres=fopen("CompC325.txt","w");  //Ҫд����ļ��򿪷�ʽ����Ϊ"w" 
	
	if(fp1==NULL||fp2==NULL||fp3==NULL||fpres==NULL){
		printf("File open error.\n");
		exit(0);
	}
	
	i=0;
	while(!feof(fp1)&&!feof(fp2)&&!feof(fp3)){
		i++;
		if(fscanf(fp1,"%d",&a)==1
			&&fscanf(fp2,"%c\n",&op)==1  //ע��ע�� 
			&&fscanf(fp3,"%d",&b)==1){
				switch(op){
					case '+':
						res=a+b;
						break;
					case '-':
						res=a-b;
						break;
					default:
						printf("Error.\n");
						break;
				}
				printf("L00%d : %d %c %d = %d\n",i,a,op,b,res);
				fprintf(fpres,"L00%d : %d %c %d = %d\n",i,a,op,b,res);
			}
		else{
			break;
		}
	}
	
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fpres);
	return 0;
} 
