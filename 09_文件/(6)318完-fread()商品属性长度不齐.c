/*��һ�洢�ܶ���Ʒ���ݣ�ÿ����Ʒ�������Ⱥ������Ʒ����������������ۣ�
	���ʱ��Ӧ���������ͷֱ���Ϊ�ַ��� char (18)���ַ��� char (12)�� long�� float���Ķ������ļ���sp38.dat��
	����δ���κθ�ʽת����ֱ��ʹ�� fwrite() ����Ʒ����д���ļ������Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ����������������ۣ���ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�����ָ�������������ʾû����ӦƷ������Ʒ��*/

/*
----Ϊ����ʾ---���ڽṹ�巽���� ʹ�� fread() �� sizeof(�ṹ��) �϶����ԣ�Ӧ����������� fread()�� 
�Ա�319.cӦ����������ʾ�ļ������ԵĴ�С�����⣬ʹ�ýṹ���޷����� 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sp{
	char pinming[18];
	char guige[12];
	long int shuliang;
	float danjia;
};

int main(void)
{
    FILE *fp;
    struct sp SP;
    char name[18];
    int flag=0;
    
    fp=fopen("sp38.dat","rb");
    if(fp==NULL){
    	printf("Open file error.");
    	exit(0);
	} 
	printf("Please input the name of goods:");
	scanf("%s",name);
	printf("cha xun jie guo:\n");
	
	while(!feof(fp)){
		if(fread(SP.pinming,sizeof(SP.pinming),1,fp)==1
		&&fread(SP.guige,sizeof(SP.guige),1,fp)==1
		&&fread(&SP.shuliang,sizeof(SP.shuliang),1,fp)==1
		&&fread(&SP.danjia,sizeof(SP.danjia),1,fp)==1)
		//if(fread(&SP,sizeof(struct sp),1,fp)==1)
		{
			if(strcmp(name,SP.pinming)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",SP.pinming,SP.guige,SP.shuliang,SP.danjia);
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
