#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
�˰汾�Ķ�ʹ��fwrite()������ȡ�������ļ����ķ�ʽ (fread(&SP, sizeof(struct goods), 1, fp) == 1)
ֱ��ÿ��һ���Զ�ȡһ���ṹ���С������ ����һ����ͬ��С���ļ�����ֵ��һ���ṹ��SP
(�������ǰ���һ���ļ������׵�ַ��������SPָ���ļ�ָ���Զ�������ͬ����) 
*/

/* User Code Begin(�������ڱ��к���Ӵ��룬���������ʹ�õĽṹ�����ͣ���������) */
struct goods
{
	char pinming[20];
	char guige[12];
	long shuliang;
	float danjia;
};
/* User Code End(������Ӵ������) */

int main(void)
{
	int n;
	char sppm[20];
	struct goods SP;
	FILE *fp;
	printf("please input shang pin pin ming:");
	gets(sppm);

	fp = fopen("sp.dat", "rb");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(0);
	}

	n = 0;
	printf("\ncha zhao qing kuang :");
	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	while (1)
	{	
		//�˴��Ķ���ֱ��ÿ��һ���Զ�ȡһ���ṹ���С������ ����һ����ͬ��С���ļ�����ֵ��һ���ṹ��SP
		//(�������ǰ���һ���ļ������׵�ַ��������SPָ���ļ�ָ���Զ�������ͬ����) 
		if (fread(&SP, sizeof(struct goods), 1, fp) == 1){  
	/* User Code End(������Ӵ������) */
			if (strcmp(sppm, SP.pinming) == 0)
			{
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
		}
		else
		{
			break;
		}
	}

	if (n == 0)
	{
		printf("\nmei you shang pin :%s", sppm);
	}
	
	fclose(fp);
	/* User Code End(������Ӵ������) */

	return 0;
}

