/*从键盘读入一个数 n，先逆序输出 n 的各位数，再输出 n 的各位数之和*/
#include <stdio.h> 
int fun(int n); //返回n的各位数字之和。递归函数.
int main(){
    int n, sum;
    printf("Input n:");
    scanf("%d",&n);
    sum = fun(n);
    printf("\nsum = %d\n",sum);
    return 0;
}
int fun(int n){ //返回n的各位数字之和。递归函数.
    if (n<10){
    	printf("%d ",n);
        return n;
    }
    else{ 
    	printf("%d ",n%10);
        return n%10+fun(n/10);  //注意此处传值传入的是n/10的值即抹去末尾一位数字后的数 
    }
}
