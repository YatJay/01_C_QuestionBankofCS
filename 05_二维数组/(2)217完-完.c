/*求任意的一个 m × m 矩阵的对角线上元素之和， m（2 ≤ m ≤ 20）及矩阵元素从键盘输入（只考虑 int型，且不需考虑求和的结果可能超出 int 型能表示的范围）。*/

#include <stdio.h>
int main(void)
{
    int m,a[20][20];
    int i,j,sum1=0,sum2=0;  //由于涉及主副对角线元素可能交叉重合的情况，这里将主副对角线之和分别计算 , 避免交叉元素少算一次(交叉的重合元素要算2次) 
    do{
    	printf("Please input the m for low&column: ");
    	scanf("%d",&m);
	}while(m<2||m>20);
	
	printf("Please input tha item: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i==j){  //主对角线 
				sum1+=a[i][j];
			}
			else if((i+j)==m-1){  //对角线包括副对角线 ，注意主对角线元素特征：列下标和行下标之和等于总阶数 
				sum2+=a[i][j];
			}
		}
	}
	
	printf("sum=%d",sum1+sum2);
	
    
    return 0;
}
