/*�������һ�� m �� m ����ĶԽ�����Ԫ��֮�ͣ� m��2 �� m �� 20��������Ԫ�شӼ������루ֻ���� int�ͣ��Ҳ��迼����͵Ľ�����ܳ��� int ���ܱ�ʾ�ķ�Χ����*/

#include <stdio.h>
int main(void)
{
    int m,a[20][20];
    int i,j,sum1=0,sum2=0;  //�����漰�����Խ���Ԫ�ؿ��ܽ����غϵ���������ｫ�����Խ���֮�ͷֱ���� , ���⽻��Ԫ������һ��(������غ�Ԫ��Ҫ��2��) 
    do{
    	printf("Please input the m for low&column: ");
    	scanf("%d",&m);
	}while(m<2||m>20);
	
	printf("Please input tha item: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i==j){  //���Խ��� 
				sum1+=a[i][j];
			}
			else if((i+j)==m-1){  //�Խ��߰������Խ��� ��ע�����Խ���Ԫ�����������±�����±�֮�͵����ܽ��� 
				sum2+=a[i][j];
			}
		}
	}
	
	printf("sum=%d",sum1+sum2);
	
    
    return 0;
}
