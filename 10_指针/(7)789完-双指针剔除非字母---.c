/*����Ĺ����ǣ��Ӽ����϶���һ���ַ���ɾ����Ӣ����ĸ��A ~ Z����a ~ z��������������ַ��������ʣ����ַ���
ע�� Ҫ����ָ����ɺ�������������Ĵ��ݡ� �Լ���������Ԫ�صķ��ʣ� �Һ����в����ٶ����ʹ�����飬 ���Զ��庯��ͷ�ͺ������в��ó��������±���ʽ�ı�ʾ����*/

#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
char *deleteother(char *str);

int main(void)
{
	char str[100];

	printf("Please input the string : ");
	gets(str);

	deleteother(str);
	printf("\noutput: %s\n", str);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
char *deleteother(char *str){
	int i,j;
	for(i=0;*(str+i)!='\0';i++){
		if ((*(str + i) >= 'a' && *(str+ i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z')){
			*(str + j) = *(str + i);
			j ++;
		}
	}
	*(str+j)='\0';
}
