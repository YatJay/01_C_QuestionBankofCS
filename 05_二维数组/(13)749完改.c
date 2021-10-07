/*用键盘输入的整数产生 5 × 5 矩阵 N，并按行输出该矩阵，每个元素占 4 个数位、右对齐。*/

#include <stdio.h>
int main(void)
{
    int a[5][5],i,j,x;
    printf("Please input x for start: ");
    scanf("%d",&x);
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		a[i][j] = x + i + j;  //此版本修改此处 ：抓住元素和行下标、列下标的关系 对 矩阵初始化写出 
			}
		}
	
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if(j==5-1){
    			printf("%4d\n",a[i][j]);
			}
			else{
				printf("%4d",a[i][j]);
			}
		}
	}
    
    return 0;
}
