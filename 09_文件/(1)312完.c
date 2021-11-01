/*有一存储很多商品数据（每件商品的属性先后包括：品名、规格、数量、单价，
	编程时相应的数据类型分别定义为字符串 char (20)、字符串 char (12)、 long、 float）的二进制文件“sp.dat”
	（即未作任何格式转换而直接使用 fwrite() 将商品属性写入文件），
	从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价（显示时，品名、规格、数量、单价之间使用逗号“,”作分隔），
	若无则显示没有相应品名的商品。把程序运行时测试用的商品数据文件“sp.dat” （见附件） 保存到程序 P312.c 所在的文件夹且文件名保持不变。*/

#include<stdio.h>
#include<stdlib.h>  //使用exit(0)函数需要用到 
#include<string.h>

int main(void)
{
	int x = 0;
	long sum;
	float unit_price;
	char search_sp[20], store_sp[20], specification[12];
	FILE *fp;

	fp = fopen("sp.dat", "rb");

	if (fp == NULL)
	{
		printf("file open error");
		exit(0);
	}
	
	printf("请输入商品名:");
	gets(search_sp);

	printf("\n查找情况:\n");

	while(!feof(fp)){
		if (fread(store_sp, 20, 1, fp)== 1 
		&& fread(specification, 12, 1, fp) == 1 
		&& fread(&sum, sizeof(long), 1, fp) == 1 
		&&fread(&unit_price, sizeof(float), 1, fp)==1){
			if (strcmp(search_sp, store_sp) == 0)
			{
				printf("%s,%s,%ld,%.2f\n", store_sp, specification, sum, unit_price);
				x = 1;
			}
		}
	}
	
	if (x == 0)
	{
		printf("没有商品 :%s", search_sp);
	}
	fclose(fp);
	return 0;
}

