/*��һ�洢�ܶ���Ʒ���ݣ�ÿ����Ʒ�������Ⱥ������Ʒ������񡢵��ۣ���С��λ����������
���ݵ�����ȷֱ�Ϊ 20�� 10�� 6�� 5�����ļ����Կո�Ϊ�ָ���ÿ����Ʒ������ռһ�У����ı��ļ���
�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
����������Ļ����ʾ����Ӧ����Ʒ��Ʒ����������������ۣ���ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�� ���ָ���������ʾʱֻ��ʾ 2 λС������
��������ʾû����ӦƷ������Ʒ��*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct goods{
	char pinming[20];
	char guige[10];
	float danjia;
	long int shuliang;
}GOODS;
int main(void){
	char input[20];
	int flag=0;
	FILE *fp;
	GOODS SP;
	
	printf("Please input the shang pin ming: ");
	gets(input);
	
	fp=fopen("sp.txt","r");
	if(fp==NULL){
		printf("Open file error!");
		exit(0);
	}
	while(!feof(fp)){
		if(fscanf(fp,"%s %s %f %ld",SP.pinming,SP.guige,&SP.danjia,&SP.shuliang)==4){
			if(strcmp(SP.pinming,input)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",SP.pinming,SP.guige,SP.shuliang,SP.danjia);
			}
		}
		else{
			break;
		}
	}
	if(flag==0){
		printf("\nmei you zhao dao shangping:%s",input);
	}
	fclose(fp);
}
