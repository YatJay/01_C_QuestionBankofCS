/*将命令行输入的三个字符串按从小到大的顺序排序后输出。
注意事项：
	1. 命令行格式为： P792 str1 str2 str3，当命令行格式不正确（参数个数不为 4）时，应报错。
	2. 程序的返回值（即由 main() 函数 return 的值和程序使用 exit() 终止运行时返回的值，也称退出代码）
规定为：
	a) 正常运行结束时，返回 0。
	b) 命令行格式不对，返回 1。*/

/*
1.strcmp()比较字符串（区分大小写），其原型为：
    【原型】int strcmp(const char *s1, const char *s2);
	【参数】s1, s2 为需要比较的两个字符串。
		字符串大小的比较是以ASCII 码表上的顺序来决定，此顺序亦为字符的值。
		strcmp()首先将s1 第一个字符值减去s2 第一个字符值，若差值为0 则再继续比较下个字符，若差值不为0 则将差值返回。
		例如字符串"Ac"和"ba"比较则会返回字符"A"(65)和'b'(98)的差值(－33)。
	【返回值】若参数s1 和s2 字符串相同则返回0。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。
2.三个字符串按从小到大的顺序排序算法
 	 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    char *Tmp;
    int i,j;
	if(argc!=4){
		printf("Input error.\n");
		printf("Usage:10_792 str1 str2 str3\n");
		exit(0);
	}
    
    //三个字符串按从小到大的顺序排序算法
	if (strcmp(argv[1], argv[2])>0){
		Tmp=argv[1], argv[1]=argv[2], argv[2]=Tmp;
	}
	if (strcmp(argv[1], argv[3])>0){
		Tmp=argv[1], argv[1]=argv[3], argv[3]=Tmp;
	}
	if (strcmp(argv[2], argv[3])>0){
		Tmp=argv[2], argv[2]=argv[3], argv[3]=Tmp;
	}
	
	printf("    output: %s   %s   %s\n", argv[1], argv[2], argv[3]);
    return 0;
}
