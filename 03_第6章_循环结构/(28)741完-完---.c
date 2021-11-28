/*输入两个整数 m 和 n，输出大于等于 m（m > 5）的 n 个素数，输出的各素数间以空格相隔。
注：素数（Prime Number），亦称质数，指在一个大于 1 的自然数中，除了 1 和此整数自身外，没法
被其他自然数整除的数。*/
#include <stdio.h>
int main(void)
{
    int m0, n0, i, flag = 0, count = 0, j;
    printf("Input the m, n: ");
    scanf("%d %d", &m0, &n0);
    printf("\nThe result:\n");
    for (j = m0;; j++){
        flag = 0;
        //内部循环只检查是否为素数 ，并修改标志位 
        for (i = 2; i < j; i++){
            if (j % i == 0){  //一旦出现其他因数，直接将标志位置为1，并跳出本层循环
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("%d ", i);
            count++;
        }
        if (count == n0){
            break;
        }
    }
    putchar('\n');
    return 0;
}
