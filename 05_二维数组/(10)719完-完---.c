/*从键盘上输入 5 个字符串（约定：每个字符串中字符数 ≤ 80 字节），对其进行升序排序并输出。*/

/*
1.strcmp()
strcmp() 用来比较字符串（区分大小写），其原型为：	int strcmp(const char *s1, const char *s2);
【参数】s1, s2 为需要比较的两个字符串。
字符串大小的比较是以ASCII 码表上的顺序来决定，此顺序亦为字符的值。
strcmp()首先将s1 第一个字符值减去s2 第一个字符值，若差值为0 则再继续比较下个字符，若差值不为0 则将差值返回。
例如字符串"Ac"和"ba"比较则会返回字符"A"(65)和'b'(98)的差值(－33)。
【返回值】若参数s1 和s2 字符串相同则返回0。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。

2.strcpy()
定义函数：char *strcpy(char *dest, const char *src);
函数说明：strcpy()会将参数src 字符串拷贝至参数dest 所指的地址。
返回值：返回参数dest 的字符串起始地址。

3.puts() 
只有一个参数。s可以是字符指针变量名、字符数组名，或者直接是一个字符串常量。功能是将字符串输出到屏幕。输出时只有遇到 '\0' 也就是字符串结束标志符才会停止。
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[5][80],temp[80];
	int i,j; 
	
	printf("Please input 5 strings: \n");
	for(i=0;i<5;i++){
		gets(str[i]);  //对二维字符数组第二维初始化方法 
	}
	
	//将二维字符数组视为一维数组，数组元素为字符串，进行冒泡排序 
	for(j=1;j<=5-1;j++){  //排序需要进行n-1轮 
		for(i=0;i<=5-j-1;i++){  //每一轮需要从第0元素到第n-j-1元素 
			if(strcmp(str[i],str[i+1])>0){  //二者之差大于0说明前一个字符串更大时调整位置
				strcpy(temp,str[i]);     //字符数组不能整体赋值，需借助函数strcpy()进行整体赋值 
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],temp);
			}
	}
	}
	
	printf("---------------------------\n");
	for(i=0;i<5;i++){
		puts(str[i]); 
	} 
	
    
    return 0;
}
