/*���ı��ļ���Comp.txt����CompA.txt����CompB.txt�� ������Ҫ��������������ʽ��
�ļ���Comp.txt���ṩ�μ�����ĵ�һ�������ļ���CompA.txt�� �ṩ����������������ֻ�С��ӷ���+�������ߡ�������-��������
�ļ���CompB.txt�� �ṩ�μ�����ĵڶ�������ÿ�������������ռһ�У����������Ϊһ����ʽ�������޷����һ��������ʽʱ���������㡣
��������ʽ�ж����������ȷ������������Щ��ʽ�Ľ��������Ļ����ʾ*/

/*
ע�⣺
scanf()  fscanf()�� %c ��ʽ����
	 //����һ��������Ժ󣬻��������ַ��ǻ��з���
	//������\n,����һ�ֶ����������ͳ���\nӰ�����
	//���\n�Ժ���һ��ֱ�ӵ���һ���г���ȡ 
	���³���ʵ����%c��Ϊscanf()�ĸ�ʽռλ����ע������ 
	{
	    char ch1;
	    char ch2;
		printf("Please input a character: ");
		scanf("%c",&ch1);  //����ʱ�����س�����Ὣ\n���뵽�������У���һ��scanf()ֱ�Ӷ�ȡ�����������ݣ����\n������ch2 
		printf("%c\n",ch1);
		scanf("%c",&ch2);
		printf("%c\n",ch2);
	    
	    return 0;
	}
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fp1,*fp2,*fp3;
	int a,b,res,i;
	char op;
	
	fp1=fopen("Comp324.txt","r");
	fp2=fopen("Comp324A.txt","r");
	fp3=fopen("Comp324B.txt","r");
	
	if(fp1==NULL||fp2==NULL||fp3==NULL){
		printf("File open error.\n");
		exit(0);
	}
	
	i=0;
	while(!feof(fp1)&&!feof(fp2)&&!feof(fp3)){
		i++;
		if(fscanf(fp1,"%d",&a)==1
		//�˴���ȡ�������Ҫ��һ���ո�ſ����������ԭ���� :
		//����һ��������Ժ󣬻��������ַ��ǻ��з���
		//������\n,����һ�ֶ����������ͳ���\nӰ�����
		//���\n�Ժ���һ��ֱ�ӵ���һ���г���ȡ 
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
			}
		else{
			break;
		}
	}
	
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
} 
