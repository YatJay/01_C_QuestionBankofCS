/*�ȴӼ����϶��� 15 ��������һ������ a[15] �У�Ȼ��������һ������Ҫ���ҳ������������еڼ���
	����0 ��ʼ������������ͬ����������״γ��ֵ�����Ԫ�� a[i] ��ֵ��
	����������������У��������Ӧ����ʾ��Ϣ��*/
	
/*
ע�⣺
	��Ҫ��ѭ�������жϲ����ʱ��Ϊ����ѭ�������������ظ������ֻ�����ñ�־λ��һ���������Ͼ͸ı��־λ����ѭ���Ժ��жϱ�־λ�ٽ��������  
*/
#include <stdio.h>
int main(void)
{
    int a[15],num,i,flag=0;
    printf("Please input 15 numbers:");
    for(i=0;i<15;i++){
    	scanf("%d",&a[i]);
	}
	
	printf("\nPlease input a number for finding: ");
	scanf("%d",&num);
	
	for(i=0;i<15;i++){
		if(a[i]==num){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		printf("\n%d has been found,it is a[%d]",num,i);
	}
	else{
		printf("\nNot found.");
	}
	
    
    return 0;
}
