/*先从键盘上读入 15 个数放在一个数组 a[15] 中，然后再输入一个数，要求找出该数是数组中第几个
	（从0 开始计数，若有相同的数，则计首次出现的数）元素 a[i] 的值。
	如果该数不在数组中，则输出相应的提示信息。*/
	
/*
注意：
	需要在循环中做判断并输出时，为避免循环内满足条件重复输出，只需设置标志位，一旦条件符合就改变标志位，出循环以后判断标志位再进行输出。  
*/
#include <stdio.h>
int main(void)
{
    int a[15],num,i,flag=0;
    printf("Please input 15 numbers:");
    for(i=0;i<15;i++){
    	scanf("%d",&a[i]);
	}
	
	printf("\nPlease input a number for finding: ");
	scanf("%d",&num);
	
	for(i=0;i<15;i++){
		if(a[i]==num){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		printf("\n%d has been found,it is a[%d]",num,i);
	}
	else{
		printf("\nNot found.");
	}
	
    
    return 0;
}
