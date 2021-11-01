/*程序的功能是： 有一存储很多商品数据（每件商品的属性先后包括：品名、规格、单价（有小数位）、数量，
	数据的最长长度分别为 20、 10、 6、 5，在文件中以空格为分隔，每个商品的数据占一行）的文本文件，
	从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价（显示时，品名、规格、数量、单价之间使用逗号“,”作分隔，单价显示时只显示 2 位小数），
	若无则显示没有相应品名的商品。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct goods
{
	char pinming[21];
	char guige[11];
	long int shuliang;
	float danjia;
};

int main(void)
{
	int n;
	char sppm[21];
	FILE *fp;
	struct goods SP;

	printf("Please input shang pin pin ming:");
	gets(sppm);

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	fp=fopen("sp.txt","r");
	if(fp==NULL) {
		printf("open file error\n");
		return 0;
	}
	/* User Code End(考生添加代码结束) */

	n = 0;
	printf("\ncha zhao qing kuang:");
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	while(!feof(fp)){
		if(fscanf(fp,"%s %s %f %ld",SP.pinming, SP.guige, &SP.danjia, &SP.shuliang)==4){  //注意：按题目规定的顺序读取文件流	
	/* User Code End(考生添加代码结束) */
			if (strcmp(sppm, SP.pinming) == 0){
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
		printf("\nmei you zhao dao shangpin :%s",sppm);
	}
	fclose(fp);
	/* User Code End(考生添加代码结束) */

	return 0;
}
