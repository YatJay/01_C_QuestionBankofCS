/*用键盘输入的整数产生 5 × 5 矩阵 N，并按行输出该矩阵，每个元素占 4 个数位、右对齐。*/

#include <stdio.h>
int main(void)
{
    int a[5][5],i,j,x;
    printf("Please input x for start: ");
    scanf("%d",&x);
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		a[i][j]=x;
    		x++;  //每一行内数值递加 
			}
		x=x-4;  //下一行再将数值减少至上一行第一个元素-4以后的数值 
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
