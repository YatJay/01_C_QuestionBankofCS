/*程序的功能是：从键盘上读入一行字符，删除除英文字母“A ~ Z”“a ~ z”外的所有其它字符，并输出剩余的字符。
注： 要求用指针完成函数中数组参数的传递、 以及各个数组元素的访问， 且函数中不得再定义和使用数组， 即自定义函数头和函数体中不得出现数组下标形式的表示法。*/

#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
char *deleteother(char *str);

int main(void)
{
	char str[100];

	printf("Please input the string : ");
	gets(str);

	deleteother(str);
	printf("\noutput: %s\n", str);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
char *deleteother(char *str){
	int i,j;
	for(i=0;*(str+i)!='\0';i++){
		if ((*(str + i) >= 'a' && *(str+ i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z')){
			*(str + j) = *(str + i);
			j ++;
		}
	}
	*(str+j)='\0';
}
