/*在磁盘上新建一个文件“Test.txt” ，将从键盘读入的多个字符存储到该文件中，要求如下：
	1. 若输入的字符中有小写字母，则应先将其转换为大写后再存入。
	2. 输入“!”表示输入结束且“!” 不存入文件中。
	3. 当文件创建失败或向文件写入字符时出错，应显示指定的出错信息并终止程序的执行。
	4. 程序的返回值（即由 main() 函数 return 的值和程序使用 exit() 终止运行时返回的值，也称退出代码）
		规定为：
		a) 运行正常，返回 0。
		b) 文件创建失败，返回 1。
		c) 向文件写入字符时出错，返回 2。*/
		
#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fp;
    char temp;
    
    fp=fopen("Test796.txt","w");
    if(fp==NULL){
    	printf("File open error.");
    	exit(1);
	}
	
	
    
    return 0;
}
