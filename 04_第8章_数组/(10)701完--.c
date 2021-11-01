/*从键盘读入 10 个数存放在一个数组中，要求用户由小到大输入。如果发现读入的某个数不是由小到大，则该数输入无效，继续读入后面的输入数据。
再将这 10 个数依次输出到屏幕上，要求每个数的输出宽度为5、不足 5 位的在其左边补上空格、数与数之间使用逗号“,”分隔。
然后输入一个数，要求找出该数是数组中第几个（序号从 1 开始计算）元素的值，如果该数不在数组中，则输出“Not Find!”。*/

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
			i--;  //如果不满足后者大于前者，i的步进-1退一步，重新输入一个满足条件的数进来 
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
