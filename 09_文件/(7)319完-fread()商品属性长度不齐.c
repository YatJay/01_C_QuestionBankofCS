/*��һ�洢�ܶ���Ʒ���ݵĶ������ļ���sp36.dat�� ��ÿ����Ʒ�������Ⱥ������
	Ʒ����17 �ֽڵ��ַ����������12 �ֽڵ��ַ�������������3 �ֽڵ������������ۣ�float ʵ������
	�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ����������������ۣ���ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�� ���ָ�����
	��������ʾû����ӦƷ������Ʒ��*/
/*
��Ŀ��ʾ����Ʒ�������ԵĴ�С�б仯 
	1.��Ŀ����������3 �ֽڵ��������������fread(&shuliang,3,1,fp)��ȡshuliangʱӦ������Ϊ��ȡ3���ֽڣ��������Ƕ���int shuliang ���������ļ�������3���ֽڵ� 
	2.������ֱ�Ӷ����������ȡ�ļ���ȡ�����Ҳ���Զ���ṹ������ʱ��ȡ�ļ���ȡ��� 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    FILE *fp;
    char pinming[17],guige[12];
    int shuliang;
    float danjia;
    char name[17];
    int flag=0;
    
    fp=fopen("sp36.dat","rb");
    if(fp==NULL){
    	printf("Open file error.");
    	exit(0);
	} 
	printf("Please input the name of goods:");
	scanf("%s",name);
	printf("cha xun jie guo:\n");
	
	while(!feof(fp)){
		if(fread(pinming,sizeof(pinming),1,fp)==1
		&&fread(guige,sizeof(guige),1,fp)==1
		&&fread(&shuliang,3,1,fp)==1  //��Ŀ����������3 �ֽڵ�������������ڶ�ȡshuliangʱӦ������Ϊ��ȡ3���ֽڣ��������Ƕ���int shuliang ���������ļ�������3���ֽڵ� 
		&&fread(&danjia,sizeof(danjia),1,fp)==1)
		//if(fread(&SP,sizeof(struct sp),1,fp)==1)
		{
			if(strcmp(name,pinming)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",pinming,guige,shuliang,danjia);
			}
		}
		else{
			break;
		}
	}
	if(flag==0){
		printf("\nmei you zhao dao shang ping :%s",name);
	}
    fclose(fp);
    return 0;
}
