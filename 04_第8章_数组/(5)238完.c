/*�ȴӼ��̶��� 5 ��������Ȼ��������� 5 ������*/

/*
ϸ�ڣ�
 scanf()��������ʱ����ԭģԭ�������⣬���ո񡢻س���tab����Ϊһ���������
*/
#include <stdio.h>
int main(void)
{
    int a[5],i,j;
    printf("Please input 5 integers: ");
    for(i=0;i<=4;i++){
    	scanf("%d",&a[i]);  //scanf()��������ʱ���ո񡢻س���tab����Ϊһ�����������
	}
    for(j=4;j>=0;j--){
    	printf("%d",a[j]);
	}
    
    return 0;
}
