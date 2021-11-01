/*从命令行输入三个数，格式为： P120 num1 num2 num3，输出 num1 + (num2 - num3) × 3 之值且保留 3位小数。提示与注意事项：
	1. 库函数提示： atoi()、 atof()。
	2. 当命令行格式不正确（参数个数不为 4）时，应报错。
	3. 程序的返回值（即由 main() 函数 return 的值和程序使用 exit() 终止运行时返回的值，也称退出代码）
	规定为：
	a) 正常运行结束时，返回 0。
	b) 命令行格式不对，返回 23。*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    double num1,num2,num3,res;  ////答案num1使用int类型定义并用atoi()赋值 
    
	if(argc!=4){
		printf("Input error.\n");
		printf("Usage:6_120 num1 num2 num3\n");
		exit(23);
	}
    num1=atof(argv[1]);
    num2=atof(argv[2]);
    num3=atof(argv[3]);
    res=num1+(num2-num3)*3;
    printf("%.3f + (%.3f + %.3f) * 3 = %.3f",num1,num2,num3,res);
    return 0;
}
