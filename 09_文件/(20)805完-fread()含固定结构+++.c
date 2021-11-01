/*程序的功能是： 有一存储很多商品数据（每件商品的属性先后包括：品名、规格、数量、单价，
编程时相应的数据类型分别定义为字符串 char (20)、字符串 char (12)、 long、 float）的二进制文件“sp.dat”
（即未作任何格式转换而直接使用 fwrite() 将商品属性写入文件），
从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
若有则在屏幕上显示出相应的商品的品名、规格、数量、单价（显示时，品名、规格、数量、单价之间使用逗号“,”作分隔），
若无则显示没有相应品名的商品。
把程序运行时测试用的商品数据文件“sp.dat” （见附件） 保存到文件夹“D:\cExam”下且文件名保持不变。*/

/*
fread()二进制文件读取 
	fread()函数用于从文件流中读取数据，其原型为：size_t  fread(void *buffer, size_t size, size_t count, FILE * stream);
	【参数】buffer为接收数据的地址，size为一个单元的大小，count为单元个数，stream为文件流。
	【执行过程】fread()函数每次从stream中最多读取count个单元，每个单元大小为size个字节，将读取的数据放到buffer；文件流的位置指针后移 size * count 字节。
	【返回值】返回实际读取的单元个数。如果小于count，则可能文件结束或读取出错；可以用ferror()检测是否读取出错，用feof()函数检测是否到达文件结尾。
			如果size或count为0，则返回0。 

	 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	char sppm[20];
	struct goods SP;
	FILE *fp;

	printf("please input shang pin pin ming:");
	gets(sppm);

	fp = fopen("sp.dat", "rb");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(0);
	}

	n = 0;
	printf("\ncha zhao qing kuang :");
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	while(!feof(fp)){
		//》》》》固定：fwrite()函数读取二进制文件流是否成功判断 
		if(fread(SP.pinming,sizeof(SP.pinming),1,fp)==1
			&&fread(SP.guige,sizeof(SP.guige),1,fp)==1
			&&fread(&SP.shuliang,sizeof(long),1,fp)==1
			&&fread(&SP.danjia,sizeof(float),1,fp)==1) {
	/* User Code End(考生添加代码结束) */
			if (strcmp(sppm, SP.pinming) == 0)
			{
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(考生可在本行后添加代码，行数不限) */	
		}
		else{
			break;
		}
	}	
	if(n==0){
		printf("\nmei you shang ping : %s",sppm);
	}	
	/* User Code End(考生添加代码结束) */

	return 0;
}
