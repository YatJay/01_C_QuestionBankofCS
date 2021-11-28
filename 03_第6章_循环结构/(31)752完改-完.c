/*键盘输入 m、 n（约定： m 和 n 均 ≤ 1000 且为正整数），
输出介于 m 和 n（含 m 和 n）中能被 3 整除且至少有位数字是 5 的所有整数。*/
#include <stdio.h>
int main(void)
{
    int m,n,begin,end,i,ge,shi,bai;
    //此处改动，将输入改为使用循环完成若不在规定范围就重新输入
	do{
		printf("Please input m & n(m,n<=1000): ");
		scanf("%d %d",&m,&n);
	}while(m<1||m>1000||n<1||n>1000);
    
	if(m>=n){
    	begin=n;
    	end=m;
	}
	else{
		begin=m;
		end=n;
	}
	printf("Result: ");
	//以下循环用于检查给定范围内的每个数 
	for(i=begin;i<=end;i++){
		if(i%3==0){ //先判断是否能被3整除，若能整除则分两位数和三位数讨论各个数位上是否为5的情况 
			if(i>=1&&i<100){
				ge=i%10;
				shi=i/10;
				if(ge==5||shi==5) {
					printf("%d ",i);
				}
			}
			else if(i>=100&&i<=1000){
				ge=i%10;
				shi=i/10%10;
				bai=i/100;
				if(ge==5||shi==5||bai==5) {
					printf("%d ",i);
				}
			}
		}
	}
    
    return 0;
}
