/*程序的功能是： 有一存储很多商品数据（每件商品的属性先后包括：品名、规格、单价（有小数位）、数量，
	数据的最长长度分别为 20、 10、 6、 5，在文件中以空格为分隔，每个商品的数据占一行）的文本文件，
	从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价
	（显示时，品名、规格、数量、单价之间使用逗号“,”作分隔，单价显示时只显示 2 位小数），若无则显示没有相应品名的商品。*/

/*
strcmp() 用来比较字符串（区分大小写）
	其原型为：int strcmp(const char *s1, const char *s2);
    若参数s1 和s2 字符串相同则返回0。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。
fscanf() 适用从文件流中格式输入 
	原型：int fscanf(FILE * stream, 格式说明符, 输入地址列表); 
	自参数stream 的文件流中读取字符串, 再根据格式说明符来转换并格式化数据。格式转换形式请参考scanf(). 转换后的结构存于对应的参数内。
	返回值：成功则返回参数数目, 失败则返回-1, 错误原因存于errno 中。
文件打开判断——若文件打开失败则退出 
	exit（0）：表示程序正常运行并退出
exit和return： 
	return是返回函数调用，如果返回的是main函数，则为退出程序
	exit是在调用处强行退出程序，运行一次程序就结束
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型，行数不限) */
struct goods{
	char pinming[21];
	char guige[11];
	float danjia;
	long shuliang;
};
/* User Code End(考生添加代码结束) */

int main(void)
{
	int n;
	char sppm[21];
	FILE *fp;
	struct goods SP;

	printf("Please input shang pin pin ming:");
	gets(sppm);
	
	//》》》》固定：文件打开成功与否判断 
	fp = fopen("sp.txt", "r");
	if (NULL == fp)
	{
		printf("file open error!");
		exit(0);  //exit（0）：正常运行程序并退出程序；
	}

	n = 0;
	printf("\ncha zhao qing kuang:");
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	
	//》》》》固定：适用文件指针进行操作 
	while(!feof(fp)){
		//文件指针会随读取自动移动位置，只要尚未到文件末尾，循环就一直执行 
		//按fscanf()规定格式进行读取，此函数适合格式化读取文件 ，if确保4个属性读取并赋值成功 
		
		//》》》》固定：调用fscanf()进行格式读取文件 是否成功判断 
		if(fscanf(fp,"%s %s %f %ld", SP.pinming,SP.guige,&SP.danjia,&SP.shuliang)==4){  
	/* User Code End(考生添加代码结束) */
			if (strcmp(sppm, SP.pinming)==0){  //strcmp()--2个字符串相同则返回0 
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
		}
		else{
			break;//？若格式化读取文件失败则跳出循环 
		}
	}
	if(n==0){
		printf("\nmei you shang ping : %s",sppm);
	}
	fclose(fp); 
	/* User Code End(考生添加代码结束) */

	return 0;
}


