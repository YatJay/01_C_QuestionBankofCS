/*从键盘读入 10 个数存放在一个数组中，要求用户由小到大输入。如果发现读入的某个数不是由小到大，则该数输入无效，继续读入后面的输入数据。
再将这 10 个数依次输出到屏幕上，要求每个数的输出宽度为5、不足 5 位的在其左边补上空格、数与数之间使用逗号“,”分隔。
然后输入一个数，要求找出该数是数组中第几个（序号从 1 开始计算）元素的值，如果该数不在数组中，则输出“Not Find!”。*/

#include<stdio.h>
#define N 10
int main(void)
{
	int arr[N], find,flag=0,i;

	printf("please input %d numbers: ", N);
	scanf("%d", &arr[0]);
	for (i=1;i<N;){    //此处不设置步进，只有当后一个元素大于前一个元素时才执行步进 
		scanf("%d", &arr[i]);
		if (arr[i] >= arr[i-1])
		{
			i++;  //只有当后一个元素大于前一个元素时才执行步进 
		}
	}

	for (i=0; i<N-1; i++){
		printf("%5d,", arr[i]);
	}
	
	printf("\ninput the arr to look for: ");
	scanf("%d", &find);
	for (i=0;i<N; i++){
		if (arr[i] == find){
			flag=1;
			break;
		}
	}

	if (flag==1){
		printf("\nthe position of %d is %d\n", find, i+1);
	}
	else{
		printf("\nNot Find!\n");
	}

	return 0;
}

