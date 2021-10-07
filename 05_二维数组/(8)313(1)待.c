/*求任意的一个 m × n 矩阵的鞍点——鞍点是指该位置上的元素在该行上为最大、在该列上为最小，矩阵中可能没有鞍点，但最多只有一个鞍点。 
 m、 n（2 ≤ m ≤ 20、 2 ≤ n ≤ 20）及矩阵元素从键盘输入（只考虑 int 型和每行、每列中没有并列最大/最小的情况）。*/
 
#include <stdio.h>
int main(void)
{
    int m,n,a[20][20];
    int i,j,maxrow,mincol;
    printf("Please input m and n: ");
    do{
    	scanf("%d %d",&m,&n);
	}while(m<2||m>20||n<2||n>20);
	
	printf("Please input the items:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0,maxrow=a[0][0],mincol=a[0][0];i<m;i++){
		for(j=0;j<n;j++){
			if(maxrow<a[i][j])
		}
	}
    
    return 0;
}
