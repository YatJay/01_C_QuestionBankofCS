/*�Ӽ��̶��� 10 �����������䰴��С�����˳���������Ȼ�������*/

#include <stdio.h>
int main(void)
{
    int a[10],i,j,temp;
    printf("Please input 10 numbers: ");
    for(i=0;i<10;i++){
    	scanf("%d",&a[i]);
	}
	
	printf("The array before sorted:");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
    printf("\n");
    
    for(i=1;i<=10-1;i++){
    	for(j=0;j<=10-i-1;j++){
    		if(a[j]>a[j+1]){
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	
	printf("The array after sorted:");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
    return 0;
}
