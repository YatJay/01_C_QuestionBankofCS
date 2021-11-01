/*��һ�洢�ܶ���Ʒ���ݣ�ÿ����Ʒ�������Ⱥ������Ʒ����������������ۣ�
	���ʱ��Ӧ���������ͷֱ���Ϊ�ַ��� char (20)���ַ��� char (12)�� long�� float���Ķ������ļ���sp.dat��
	����δ���κθ�ʽת����ֱ��ʹ�� fwrite() ����Ʒ����д���ļ�����
	�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ����������������ۣ���ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�����ָ�����
	��������ʾû����ӦƷ������Ʒ���ѳ�������ʱ�����õ���Ʒ�����ļ���sp.dat�� ���������� ���浽���� P312.c ���ڵ��ļ������ļ������ֲ��䡣*/

#include<stdio.h>
#include<stdlib.h>  //ʹ��exit(0)������Ҫ�õ� 
#include<string.h>

int main(void)
{
	int x = 0;
	long sum;
	float unit_price;
	char search_sp[20], store_sp[20], specification[12];
	FILE *fp;

	fp = fopen("sp.dat", "rb");

	if (fp == NULL)
	{
		printf("file open error");
		exit(0);
	}
	
	printf("��������Ʒ��:");
	gets(search_sp);

	printf("\n�������:\n");

	while(!feof(fp)){
		if (fread(store_sp, 20, 1, fp)== 1 
		&& fread(specification, 12, 1, fp) == 1 
		&& fread(&sum, sizeof(long), 1, fp) == 1 
		&&fread(&unit_price, sizeof(float), 1, fp)==1){
			if (strcmp(search_sp, store_sp) == 0)
			{
				printf("%s,%s,%ld,%.2f\n", store_sp, specification, sum, unit_price);
				x = 1;
			}
		}
	}
	
	if (x == 0)
	{
		printf("û����Ʒ :%s", search_sp);
	}
	fclose(fp);
	return 0;
}

