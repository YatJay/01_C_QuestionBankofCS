/*���� 10 ������������һά���飬���ֵ���±궼Ϊ����������� 1 ��Ԫ�ص��±�Ϊ 0����Ԫ�ؼ��������Ҫ�����������*/

#include <stdio.h>
int main(void)
{
    int a[10],i,count=0;
	printf("Please input 10 numbers: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
	
	for(i=1;i<10;i=i+2){
		if(a[i]%2==1){
			count++;
		}
	}
	printf("count=%d\n",count);
	
	for(i=1;i<10;i=i+2){
		if(a[i]%2==1){
			count++;
			printf("a[%d]=%d\n",i,a[i]);
		}
	}
    
    return 0;
}
