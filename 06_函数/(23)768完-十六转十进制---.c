/*����Ĺ����ǣ� ���Ӽ��̶����һ��ʮ�������ַ���ת����һ��ʮ�������������ע�⣺
	1. ����ֻ����ת���ɵ�ʮ���ƴ�С���ᳬ�� long int �����ܱ�ʾ���������
	2. ֻ�账������������������
	3. �������ĸ�����Ǵ�дҲ����Сд��
	4. �����в���ʹ�ÿ⺯�� isxdigit()�� sscanf() ��ʹ��ͬ���ı��������������ʡ�*/

/*
ע�⣺
1.��0~9�ַ�ת��Ϊ0~9���֣�ֻ�轫�ַ�������ȥ'0'
	x=str[i]-'0';     //���ַ���0��9֮�䣬��������������
	ע���ַ����������ڴ��ﶼ����ASCII����ʽ�洢�ġ�
		��ȥ'0'����ʵ���Ǽ�ȥ�ַ�'0'��ASCII�룬���ַ�'0'��ASCII����30�����Լ�ȥ'0'Ҳ���Ǽ�ȥ30��Ȼ��Ϳ��Եõ��ַ���Ӧ�������ˡ� 
*/
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
	int i,j,count=0,R=16; 
	
	for(i=0;str[i]!='\0';i++){
		count++;
	}
	
	for(i=count-1,j=0;i>=0;i--,j++){
		if(str[i]=='A'||str[i]=='a') {
			dec+=10*pow(16,j);
		}
		else if(str[i]=='B'||str[i]=='b') {
			dec+=11*pow(16,j);
		}
		else if(str[i]=='C'||str[i]=='c') {
			dec+=12*pow(16,j);
		}
		else if(str[i]=='D'||str[i]=='d') {
			dec+=13*pow(16,j);
		}
		else if(str[i]=='E'||str[i]=='e') {
			dec+=14*pow(16,j);
		}
		else if(str[i]=='F'||str[i]=='f') {
			dec+=15*pow(16,j);
		}
		else{
			dec+=(str[i]-'0')*pow(16,j);
		}
	}
	return dec;
}



