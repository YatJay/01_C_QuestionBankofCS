/*�ü���������������� 5 �� 5 ���� N������������þ���ÿ��Ԫ��ռ 4 ����λ���Ҷ��롣*/

#include <stdio.h>
int main(void)
{
    int a[5][5],i,j,x;
    printf("Please input x for start: ");
    scanf("%d",&x);
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		a[i][j] = x + i + j;  //�˰汾�޸Ĵ˴� ��ץסԪ�غ����±ꡢ���±�Ĺ�ϵ �� �����ʼ��д�� 
			}
		}
	
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if(j==5-1){
    			printf("%4d\n",a[i][j]);
			}
			else{
				printf("%4d",a[i][j]);
			}
		}
	}
    
    return 0;
}
