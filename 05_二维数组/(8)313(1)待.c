/*�������һ�� m �� n ����İ��㡪��������ָ��λ���ϵ�Ԫ���ڸ�����Ϊ����ڸ�����Ϊ��С�������п���û�а��㣬�����ֻ��һ�����㡣 
 m�� n��2 �� m �� 20�� 2 �� n �� 20��������Ԫ�شӼ������루ֻ���� int �ͺ�ÿ�С�ÿ����û�в������/��С���������*/
 
#include <stdio.h>
int main(void)
{
    int m,n,a[20][20];
    int i,j,maxrow,mincol;
    printf("Please input m and n: ");
    do{
    	scanf("%d %d",&m,&n);
	}while(m<2||m>20||n<2||n>20);
	
	printf("Please input the items:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0,maxrow=a[0][0],mincol=a[0][0];i<m;i++){
		for(j=0;j<n;j++){
			if(maxrow<a[i][j])
		}
	}
    
    return 0;
}
