/*�������һ�� m �� m ����ĵ� 0 �С��� 2 �к����һ��������֮�ͣ� m��4 �� m �� 20��������Ԫ�ش�
�������루ֻ���� int �ͣ���*/

#include <stdio.h>
int main(void)
{
     int m,a[20][20];
    int i,j,sum=0;
    do{
    	printf("Please input the m for low&column: ");
    	scanf("%d",&m);
	}while(m<4||m>20);
	
	printf("Please input tha item: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(j==0||j==2||j==m-1){  //������һ����ά����ı������̣�����Ԫ�ض�ֻ����һ�Σ�������������ͼ������ 
				sum+=a[i][j];
			} 
		}
	}
	
	printf("sum=%d",sum);
    
    return 0;
}
