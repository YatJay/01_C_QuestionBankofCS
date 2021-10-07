/*输入 10 个整型数存入一维数组，输出值和下标都为奇数（数组第 1 个元素的下标为 0）的元素及其个数，要求先输出个数*/

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
