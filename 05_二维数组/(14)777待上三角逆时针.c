/*方阵的主对角线之上称为“上三角”，设计一个用于填充 n（n 从键盘读入，约定其取值范围为 3 ~ 20）阶方阵的上三角区域的程序。
填充的规则是：使用 1， 2， 3，…的自然数列，从左上角开始，按照顺时针方向螺旋填充。输出时要求每个数据宽度为 4、右对齐。*/

#include <stdio.h>
int main(void)
{
    int a[20][20],n;
    int i,j,x=1;
    
    do{
    	printf("Please input the n for n x n metrix: ");
    	scanf("%d",&n);
	}while(n<3||n>20);
	
	for(i=0,x=1;i<n;i++){
		for(j=0;j<n-i;j++){
			a[i][j]=x;
			x++;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(j==n-i-1){
				printf("%4d\n",a[i][j]);
			}
			else{
				printf("%4d",a[i][j]);
			}
		}
	}
	
	
    
    return 0;
}
