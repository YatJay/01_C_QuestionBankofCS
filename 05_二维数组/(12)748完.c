/*�Ӽ������������Ľ��� n��n �� 14����������Ԫ�ص�ֵ������λ�õ�����������֮�͵� n �������е�ֵ�� 0 ��ʼ���������� n = 3 ʱ������Ϊ
0 3 6
3 6 9
6 9 12
������þ�����ʾʱÿ�������Ϊ 4���Ҷ��룩��Ȼ�������� sum1 �� sum2 ��ֵ�� sum1 Ϊ���������в�����Ԫ��֮�ͣ� sum2 Ϊ�����һ���Խ���Ԫ��֮�͡�*/

#include <stdio.h>
int main(void)
{
    int n,a[14][14],i,j,sum1,sum2;
    printf("Please input n for n x n matrix: ");
    do{
    	scanf("%d",&n);
	}while(n<0||n>14);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=(i+j)*n;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1){  //�����±�Ϊ���һ��ʱ���Ԫ�ظ���������� 
				printf("%4d \n",a[i][j]);
			}
			else{
				printf("%4d ",a[i][j]);
			}
		}
	}
    
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=0&&j!=0&&i!=n-1&&j!=n-1){  //4������ͬʱ����ʱ�ż���:�ܱ�Ԫ��(i==0||j==0||i==m-1||j==m-1)  ���ܱ�Ԫ�� (i!=0&&j!=0&&i!=n-1&&j!=n-1)
				sum1+=a[i][j];
			}
		}
	}
	printf("sum1=%d\n",sum1);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum2+=a[i][j];
			}
		}
	}
	printf("sum2=%d\n",sum2);
	
    return 0;
}
