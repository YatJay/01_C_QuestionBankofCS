/*从命令行输入两个实数，格式为： P117 num1 num2，输出 (num1 - num1) × 3 之值且保留 3 位小数。提示与注意事项：
	1. 库函数提示： atof。
	2. 当命令行格式不正确（参数个数不为 3）时，应报错。
	3. 程序的返回值（即由 main() 函数 return 的值和程序使用 exit() 终止运行时返回的值，也称退出代码）
	规定为：
	a) 正常运行结束时，返回 0。
	b) 命令行格式不对，返回 76。*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    double num1,num2,res;
    
	if(argc!=3){
		printf("Input error.\n");
		printf("Usage:3_117 num1 num2\n");
		exit(76);
	}
    num1=atof(argv[1]);
    num2=atof(argv[2]);
    res=(num1-num2)*3;
    printf("(%.3f - %.3f) * 3 = %.3f",num1,num2,res);
    return 0;
}
