/*����Ĺ����ǣ� ��һ�洢�ܶ���Ʒ���ݣ�ÿ����Ʒ�������Ⱥ������Ʒ������񡢵��ۣ���С��λ����������
	���ݵ�����ȷֱ�Ϊ 20�� 10�� 6�� 5�����ļ����Կո�Ϊ�ָ���ÿ����Ʒ������ռһ�У����ı��ļ���
	�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ�������ж�����¼��û�У���
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ�����������������
	����ʾʱ��Ʒ�����������������֮��ʹ�ö��š�,�����ָ���������ʾʱֻ��ʾ 2 λС��������������ʾû����ӦƷ������Ʒ��*/

/*
strcmp() �����Ƚ��ַ��������ִ�Сд��
	��ԭ��Ϊ��int strcmp(const char *s1, const char *s2);
    ������s1 ��s2 �ַ�����ͬ�򷵻�0��s1 ������s2 �򷵻ش���0 ��ֵ��s1 ��С��s2 �򷵻�С��0 ��ֵ��
fscanf() ���ô��ļ����и�ʽ���� 
	ԭ�ͣ�int fscanf(FILE * stream, ��ʽ˵����, �����ַ�б�); 
	�Բ���stream ���ļ����ж�ȡ�ַ���, �ٸ��ݸ�ʽ˵������ת������ʽ�����ݡ���ʽת����ʽ��ο�scanf(). ת����Ľṹ���ڶ�Ӧ�Ĳ����ڡ�
	����ֵ���ɹ��򷵻ز�����Ŀ, ʧ���򷵻�-1, ����ԭ�����errno �С�
�ļ����жϡ������ļ���ʧ�����˳� 
	exit��0������ʾ�����������в��˳�
exit��return�� 
	return�Ƿ��غ������ã�������ص���main��������Ϊ�˳�����
	exit���ڵ��ô�ǿ���˳���������һ�γ���ͽ���
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char sppm[21];
	FILE *fp;
	struct goods SP;

	printf("Please input shang pin pin ming:");
	gets(sppm);
	
	//���������̶����ļ��򿪳ɹ�����ж� 
	fp = fopen("sp.txt", "r");
	if (NULL == fp)
	{
		printf("file open error!");
		exit(0);  //exit��0�����������г����˳�����
	}

	n = 0;
	printf("\ncha zhao qing kuang:");
	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	
	//���������̶��������ļ�ָ����в��� 
	while(!feof(fp)){
		//�ļ�ָ������ȡ�Զ��ƶ�λ�ã�ֻҪ��δ���ļ�ĩβ��ѭ����һֱִ�� 
		//��fscanf()�涨��ʽ���ж�ȡ���˺����ʺϸ�ʽ����ȡ�ļ� ��ifȷ��4�����Զ�ȡ����ֵ�ɹ� 
		
		//���������̶�������fscanf()���и�ʽ��ȡ�ļ� �Ƿ�ɹ��ж� 
		if(fscanf(fp,"%s %s %f %ld", SP.pinming,SP.guige,&SP.danjia,&SP.shuliang)==4){  
	/* User Code End(������Ӵ������) */
			if (strcmp(sppm, SP.pinming)==0){  //strcmp()--2���ַ�����ͬ�򷵻�0 
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
		printf("\nmei you shang ping : %s",sppm);
	}
	fclose(fp); 
	/* User Code End(������Ӵ������) */

	return 0;
}


