/*制作一简单的计算器。 注意事项：
	1. 需要计算的内容从命令行输入，格式为： P115 num1 op num2，当命令行格式不正确（参数个数不为 4）时，应报错。
	2. op 的取值范围为“+” “-”“*”“/”“%” ，超出此范围则应报错。
	3. num1 和 num2均为整数（int）， op 为“+”“-” “*”时不考虑运算结果超出 int 型能表示的范围，op 为“/” “%”时不考虑除数为 0 的情况，但 op 为“/”时计算结果应保留 2 位小数。
	4. 程序的返回值（即由 main() 函数 return 的值和程序使用 exit() 终止运行时返回的值，也称退出代码）
	规定为：
	a) 正常运行结束时，返回 0。
	b) 命令行格式不对，返回 1。
	c) op 超出范围时，返回 2。*/

/*
atoi()函数字符串转化为整数 
	原型：int atoi(const char *str) 
	功能：把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。
2.int main(int argc,char *argv[])命令行传递参数 
	命令行参数是使用 main() 函数参数来处理的，其中，argc 是指传入参数的个数，argv[] 是一个指针数组，指向传递给程序的每个参数。
*/

#include <stdio.h>
#include <stdlib.h> 
int main(int argc,char *argv[]){
    char op;
    int num1,num2;
    if(argc!=4){
    	printf("Input error.\n");
    	exit(1);
	}
	
	num1=atoi(argv[1]);
	op=*argv[2];
    num2=atoi(argv[3]);
	switch(op){
		case '+':
			printf("%d %c %d = %d",num1,op,num2,num1+num2);
			break;
		case '-':
			printf("%d %c %d = %d",num1,op,num2,num1-num2);
			break;
		case '*':
			printf("%d %c %d = %d",num1,op,num2,num1*num2);
			break;
		case '/':
			printf("%d %c %d = %.2f",num1,op,num2,(float)num1/num2);
			break;
		case '%':
			printf("%d %c %d = %d",num1,op,num2,num1/num2);
			break;
		default:
			printf("op(%c)error.\n",op);
			exit(2);
	}
    
    return 0;
}
