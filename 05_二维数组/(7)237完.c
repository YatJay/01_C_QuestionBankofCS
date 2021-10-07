/*求任意的一个 m × m 矩阵的第 0 列、第 2 列和最后一列所有数之和， m（4 ≤ m ≤ 20）及矩阵元素从
键盘输入（只考虑 int 型）。*/

#include <stdio.h>
int main(void)
{
     int m,a[20][20];
    int i,j,sum=0;
    do{
    	printf("Please input the m for low&column: ");
    	scanf("%d",&m);
	}while(m<4||m>20);
	
	printf("Please input tha item: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(j==0||j==2||j==m-1){  //本身是一个二维数组的遍历过程，各个元素都只访问一次，当满足此条件就计入求和 
				sum+=a[i][j];
			} 
		}
	}
	
	printf("sum=%d",sum);
    
    return 0;
}
