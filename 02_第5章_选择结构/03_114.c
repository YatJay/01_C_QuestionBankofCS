/*��дһ���򵥼��������������ʽΪ�� data1 op data2��
���� data1 �� data2 �ǲμ��������������data1�� data2�� ���붨��Ϊ int����������ӻ���˿��ܳ��� int �ܱ�ʾ�ķ�Χ���� 
op Ϊ�����������ȡֵֻ���ǡ�+����-����*����/����%�� ��*/

/*
printf()���%����ʱҪ��%%������Ϊ%��ռλ�� 
*/
#include <stdio.h>
int main(void)
{
    int data1,data2,cha,yu;
    long he,ji;
    float shang;
    char op;
	printf("Please input data1 opetation data2\n");
	scanf("%d %c %d",&data1,&op,&data2);
	switch(op){
		case '+':
			he = data1+data2;
			printf("%d + %d =%ld",data2,data2,he);
			break;
		case '-':
			cha = data1-data2;
			printf("%d - %d = %d",data2,data2,cha);
			break;
		case '*':
			ji = data1*data2;
			printf("%d * %d = %ld",data2,data2,ji);
			break;
		case '/':
			if(data2!=0){
				shang = (float)data1/data2;
				printf("%d / %d = %.2f",data2,data2,shang);
			}
			else printf("Error,chu shu wei 0\n");
			break;
		case '%':
			if(data2!=0){
				yu = data1%data2;
				printf("%d %% %d = %d",data2,data2,yu);
			}
			else printf("Error,chu shu wei 0\n");
			break;
		default:
			printf("Invalid input\n");
	}
    return 0;
}
