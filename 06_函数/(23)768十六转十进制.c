/*����Ĺ����ǣ� ���Ӽ��̶����һ��ʮ�������ַ���ת����һ��ʮ�������������ע�⣺
	1. ����ֻ����ת���ɵ�ʮ���ƴ�С���ᳬ�� long int �����ܱ�ʾ���������
	2. ֻ�账������������������
	3. �������ĸ�����Ǵ�дҲ����Сд��
	4. �����в���ʹ�ÿ⺯�� isxdigit()�� sscanf() ��ʹ��ͬ���ı��������������ʡ�*/

#include<stdio.h>
#include<math.h> 
/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
int isHex(char str[]);
long int HexToDec(char str[]);


/* User Code End(������Ӵ������) */

int main(void)
{
	int flag;  /* ��־���������Ƿ�Ϸ���0��ʾ���Ϸ� */
	long int result10;  /* ת����� */
	char str[20];

	printf("input a data:");
	gets(str);

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	flag=isHex(str);
	if(flag==1) result10=HexToDec(str);

	/* User Code End(������Ӵ������) */

	if (0 == flag)
	{
		printf("\ndata is error.\n");
	}
	else
	{
		printf("\nThe result is: %ld\n", result10);
	}

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
int isHex(char str[]){
	int flag=0,i;
	for(i=0;str[i]!='\0';i++){
		if((str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F')||(str[i]>='0'&&str[i]<='9')){
			flag=1;
		}
	}
	return flag;
}

long int HexToDec(char str[]){
	long int dec=0;
	int i,j,count=0;
	
	for(i=0;str[i]!='\0';i++){
		count++;
	}
	
	for(i=count-1,j=0;i>=0;i--){
			dec+=str[i]*pow(16,j);
			j++;
		}
	
	return dec;
}



