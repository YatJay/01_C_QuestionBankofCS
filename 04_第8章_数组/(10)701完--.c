/*�Ӽ��̶��� 10 ���������һ�������У�Ҫ���û���С�������롣������ֶ����ĳ����������С���������������Ч���������������������ݡ�
�ٽ��� 10 ���������������Ļ�ϣ�Ҫ��ÿ������������Ϊ5������ 5 λ��������߲��Ͽո�������֮��ʹ�ö��š�,���ָ���
Ȼ������һ������Ҫ���ҳ������������еڼ�������Ŵ� 1 ��ʼ���㣩Ԫ�ص�ֵ������������������У��������Not Find!����*/

#include <stdio.h>
int main(void)
{
    int arr[10],i,temp,m,flag=0,k;
    printf("Please input 10 numbers: ");
    
    scanf("%d",&arr[0]);
    for(i=1;i<10;i++){
    	scanf("%d ",&temp);
    	if(temp>arr[i-1]){
    		arr[i]=temp;
		}
		else{
			i--;  //�����������ߴ���ǰ�ߣ�i�Ĳ���-1��һ������������һ������������������ 
		}
	}
	
	for(i=0;i<10;i++){
		printf("%5d,",arr[i]);
	}
	
	printf("\nPlease input m to look for: ");
	scanf("%d",&m);
	for(i=0;i<10;i++){
		if(m==arr[i]){
			flag=1;
			k=i+1;
		}
	}
	
	if(flag=1){
		printf("the position of %d is %d.",m,k);
	}
	else{
		printf("not found.");
	}
    
    return 0;
}
