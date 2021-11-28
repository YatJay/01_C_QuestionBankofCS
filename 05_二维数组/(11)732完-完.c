/*输入 3 行 3 列的矩阵，输出所有元素的累加和。*/

#include <stdio.h>
int main(void)
{
    int a[3][3],i,j,sum=0;
    
    printf("Please input the items of 3 x 3 matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum+=a[i][j];
		}
	}
	printf("sum=%d",sum);
    
    return 0;
}
