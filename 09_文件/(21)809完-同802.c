/*����Ĺ����ǣ� ��һ�洢�ܶ���Ʒ���ݣ�ÿ����Ʒ�������Ⱥ������Ʒ������񡢵��ۣ���С��λ����������
	���ݵ�����ȷֱ�Ϊ 20�� 10�� 6�� 5�����ļ����Կո�Ϊ�ָ���ÿ����Ʒ������ռһ�У����ı��ļ���
	�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ����������������ۣ���ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�����ָ���������ʾʱֻ��ʾ 2 λС������
	��������ʾû����ӦƷ������Ʒ��*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct goods
{
	char pinming[21];
	char guige[11];
	long int shuliang;
	float danjia;
};

int main(void)
{
	int n;
	char sppm[21];
	FILE *fp;
	struct goods SP;

	printf("Please input shang pin pin ming:");
	gets(sppm);

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	fp=fopen("sp.txt","r");
	if(fp==NULL) {
		printf("open file error\n");
		return 0;
	}
	/* User Code End(������Ӵ������) */

	n = 0;
	printf("\ncha zhao qing kuang:");
	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	while(!feof(fp)){
		if(fscanf(fp,"%s %s %f %ld",SP.pinming, SP.guige, &SP.danjia, &SP.shuliang)==4){  //ע�⣺����Ŀ�涨��˳���ȡ�ļ���	
	/* User Code End(������Ӵ������) */
			if (strcmp(sppm, SP.pinming) == 0){
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
		}
		else{
			break;//������ʽ����ȡ�ļ�ʧ��������ѭ�� 
		} 
	}
	if(n==0){
		printf("\nmei you zhao dao shangpin :%s",sppm);
	}
	fclose(fp);
	/* User Code End(������Ӵ������) */

	return 0;
}
