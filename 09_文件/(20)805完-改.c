#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
此版本改动使用fwrite()函数读取二进制文件流的方式 (fread(&SP, sizeof(struct goods), 1, fp) == 1)
直接每次一次性读取一个结构体大小的数据 ，将一段相同大小的文件流赋值给一个结构体SP
(本质上是把这一段文件流的首地址赋给交由SP指向，文件指针自动后移相同长度) 
*/

/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型，行数不限) */
struct goods
{
	char pinming[20];
	char guige[12];
	long shuliang;
	float danjia;
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
	while (1)
	{	
		//此处改动：直接每次一次性读取一个结构体大小的数据 ，将一段相同大小的文件流赋值给一个结构体SP
		//(本质上是把这一段文件流的首地址赋给交由SP指向，文件指针自动后移相同长度) 
		if (fread(&SP, sizeof(struct goods), 1, fp) == 1){  
	/* User Code End(考生添加代码结束) */
			if (strcmp(sppm, SP.pinming) == 0)
			{
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
		}
		else
		{
			break;
		}
	}

	if (n == 0)
	{
		printf("\nmei you shang pin :%s", sppm);
	}
	
	fclose(fp);
	/* User Code End(考生添加代码结束) */

	return 0;
}

