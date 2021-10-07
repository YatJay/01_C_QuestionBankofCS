/*程序 P242.c 已编写部分代码（见文件内容） ，请根据程序中的要求完善程序（在指定的位置添加代码或将__________换成代码）。
程序的功能是：从键盘读入若干个整数（读到 -1 或读满 16 个数均结束读入） ，然后倒序输出这些数。*/

#include <stdio.h>

int input(int array[]);//______________________________  /* userCode(<50字符): 自定义函数1之原型声明 */
void printReverse(int array[],int n);//______________________________  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[16], count;

	printf("请输入若干个数: ");
	count=input(num);//______________________________  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", count);
	printReverse(num,count);//______________________________  /* userCode(<30字符): 调用函数倒序输出num的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
//>>>此函数还兼具统计输入的元素个数(即数组个数)的功能，故令其返回值为计数值 
int input(int array[]){
	int i,temp,cnt=0;
	for(i=0;i<16;i++){
		scanf("%d",&temp);
		if(temp!=-1){
			array[i]=temp;
			cnt++;
		}
		else{
			break;
		}
	}
	return cnt;
}

void printReverse(int array[],int cnt){
	int i;
	for(i=cnt-1;i>=0;i--){
		printf("%d ",array[i]);
	}
}
