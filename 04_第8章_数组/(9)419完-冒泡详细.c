/*编写一程序实现以下功能：
1. 程序运行时先显示“Input:” ，再从键盘上读入一组整数（只考虑 int 型），数与数之间只使用空格或回车作分隔。
	数可正可负，最多 100 个，但若读入的数为 -888 时，则表示输入结束且 -888 不算在该组数内。
2. 对这一组数按从小到大的顺序进行排序。
3. 将排序后的这一组数输出到屏幕上*/

#include <stdio.h>
int main(void)
{
    int a[100],temp,i,j,count=0,t;
	printf("Please input: ");
	for(i=0;i<=100;i++){
		scanf("%d",&temp);
		if(temp!=-888){
			a[i]=temp;
			count++;
		}
		else{
			break;
		}
	} 
	//冒泡排序 
	printf("Result: ");
	for(i=0;i<=count-1;i++){  //对于N个元素，只需要进行N-1次循环即排序完成
		for(j=0;j<count-i-1;j++){  ////最后i个元素已经有序，不需要参与比较
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			//此处不要写else{ break;	},若写了一旦不满足当i时前一个大于后一个就会本次跳出这层循环，而此时尚未完成本轮的冒泡
		}
	}
	
	for(i=0;i<count;i++){
		printf("%d\t",a[i]);
	}
    
    return 0;
}
