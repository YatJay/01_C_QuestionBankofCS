/*����Ĺ����ǣ� ��һ�洢�ܶ���Ʒ���ݣ�ÿ����Ʒ�������Ⱥ������Ʒ����������������ۣ�
���ʱ��Ӧ���������ͷֱ���Ϊ�ַ��� char (20)���ַ��� char (12)�� long�� float���Ķ������ļ���sp.dat��
����δ���κθ�ʽת����ֱ��ʹ�� fwrite() ����Ʒ����д���ļ�����
�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
����������Ļ����ʾ����Ӧ����Ʒ��Ʒ����������������ۣ���ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�����ָ�����
��������ʾû����ӦƷ������Ʒ��
�ѳ�������ʱ�����õ���Ʒ�����ļ���sp.dat�� ���������� ���浽�ļ��С�D:\cExam�������ļ������ֲ��䡣*/

/*
fread()�������ļ���ȡ 
	fread()�������ڴ��ļ����ж�ȡ���ݣ���ԭ��Ϊ��size_t  fread(void *buffer, size_t size, size_t count, FILE * stream);
	��������bufferΪ�������ݵĵ�ַ��sizeΪһ����Ԫ�Ĵ�С��countΪ��Ԫ������streamΪ�ļ�����
	��ִ�й��̡�fread()����ÿ�δ�stream������ȡcount����Ԫ��ÿ����Ԫ��СΪsize���ֽڣ�����ȡ�����ݷŵ�buffer���ļ�����λ��ָ����� size * count �ֽڡ�
	������ֵ������ʵ�ʶ�ȡ�ĵ�Ԫ���������С��count��������ļ��������ȡ����������ferror()����Ƿ��ȡ������feof()��������Ƿ񵽴��ļ���β��
			���size��countΪ0���򷵻�0�� 

	 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬���������ʹ�õĽṹ�����ͣ���������) */
struct goods{
	char pinming[21];
	char guige[11];
	float danjia;
	long shuliang;
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
	while(!feof(fp)){
		//���������̶���fwrite()������ȡ�������ļ����Ƿ�ɹ��ж� 
		if(fread(SP.pinming,sizeof(SP.pinming),1,fp)==1
			&&fread(SP.guige,sizeof(SP.guige),1,fp)==1
			&&fread(&SP.shuliang,sizeof(long),1,fp)==1
			&&fread(&SP.danjia,sizeof(float),1,fp)==1) {
	/* User Code End(������Ӵ������) */
			if (strcmp(sppm, SP.pinming) == 0)
			{
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */	
		}
		else{
			break;
		}
	}	
	if(n==0){
		printf("\nmei you shang ping : %s",sppm);
	}	
	/* User Code End(������Ӵ������) */

	return 0;
}
