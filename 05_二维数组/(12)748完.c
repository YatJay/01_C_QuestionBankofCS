/*从键盘上输入矩阵的阶数 n（n ≤ 14），矩阵中元素的值等于其位置的行数和列数之和的 n 倍（行列的值从 0 开始计数），如 n = 3 时，矩阵为
0 3 6
3 6 9
6 9 12
先输出该矩阵（显示时每个数宽度为 4、右对齐），然后计算输出 sum1 和 sum2 的值： sum1 为矩阵中所有不靠边元素之和， sum2 为矩阵的一条对角线元素之和。*/

#include <stdio.h>
int main(void)
{
    int n,a[14][14],i,j,sum1,sum2;
    printf("Please input n for n x n matrix: ");
    do{
    	scanf("%d",&n);
	}while(n<0||n>14);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=(i+j)*n;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1){  //当列下标为最后一列时输出元素附带输出换行 
				printf("%4d \n",a[i][j]);
			}
			else{
				printf("%4d ",a[i][j]);
			}
		}
	}
    
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=0&&j!=0&&i!=n-1&&j!=n-1){  //4个条件同时满足时才计入:周边元素(i==0||j==0||i==m-1||j==m-1)  非周边元素 (i!=0&&j!=0&&i!=n-1&&j!=n-1)
				sum1+=a[i][j];
			}
		}
	}
	printf("sum1=%d\n",sum1);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum2+=a[i][j];
			}
		}
	}
	printf("sum2=%d\n",sum2);
	
    return 0;
}
