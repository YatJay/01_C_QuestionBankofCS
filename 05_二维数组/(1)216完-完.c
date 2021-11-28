/*求任意的一个 m × m 矩阵的最大数及其所在的行列数， m（2 ≤ m ≤ 20）及矩阵元素从键盘输入（只考虑 int 型，且不需考虑求和的结果可能超出 int 型能表示的范围）。*/

#include <stdio.h>
int main(void)
{
    int m,a[20][20];
    int i,j,max,maxi,maxj;
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
	
	for(i=0,max=a[0][0];i<m;i++){  //切注意，二维数组最大值的求法：max=a[0][0]这个赋初值在外循环，若在内循环则每次进内循环都会重置max=a[0][0]
		for(j=0;j<m;j++){
			if(max<=a[i][j]){
				max=a[i][j];
				maxi=i;
				maxj=j;
			}
		}
	}
	
	printf("max=%d\nmaxi=%d\nmaxj=%d",max,maxi,maxj);
    return 0;
}
