/*��������Խ���֮�ϳ�Ϊ�������ǡ������һ��������� n��n �Ӽ��̶��룬Լ����ȡֵ��ΧΪ 3 ~ 20���׷��������������ĳ���
���Ĺ����ǣ�ʹ�� 1�� 2�� 3��������Ȼ���У������Ͻǿ�ʼ������˳ʱ�뷽��������䡣���ʱҪ��ÿ�����ݿ��Ϊ 4���Ҷ��롣*/

#include <stdio.h>
int main(void)
{
    int a[20][20],n;
    int i,j,x=1;
    
    do{
    	printf("Please input the n for n x n metrix: ");
    	scanf("%d",&n);
	}while(n<3||n>20);
	
	for(i=0,x=1;i<n;i++){
		for(j=0;j<n-i;j++){
			a[i][j]=x;
			x++;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(j==n-i-1){
				printf("%4d\n",a[i][j]);
			}
			else{
				printf("%4d",a[i][j]);
			}
		}
	}
	
	
    
    return 0;
}
