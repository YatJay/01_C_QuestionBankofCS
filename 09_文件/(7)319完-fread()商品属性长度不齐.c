/*有一存储很多商品数据的二进制文件“sp36.dat” ，每件商品的属性先后包括：
	品名（17 字节的字符串）、规格（12 字节的字符串）、数量（3 字节的整数）、单价（float 实数）。
	从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价（显示时，品名、规格、数量、单价之间使用逗号“,” 作分隔），
	若无则显示没有相应品名的商品。*/
/*
题目提示的商品各个属性的大小有变化 
	1.题目给出数量（3 字节的整数），因此在fread(&shuliang,3,1,fp)读取shuliang时应当设置为读取3个字节，尽管我们定义int shuliang ，但是在文件中它是3个字节的 
	2.本程序直接定义变量来存取文件读取结果，也可以定义结构体来临时存取文件读取结果 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    FILE *fp;
    char pinming[17],guige[12];
    int shuliang;
    float danjia;
    char name[17];
    int flag=0;
    
    fp=fopen("sp36.dat","rb");
    if(fp==NULL){
    	printf("Open file error.");
    	exit(0);
	} 
	printf("Please input the name of goods:");
	scanf("%s",name);
	printf("cha xun jie guo:\n");
	
	while(!feof(fp)){
		if(fread(pinming,sizeof(pinming),1,fp)==1
		&&fread(guige,sizeof(guige),1,fp)==1
		&&fread(&shuliang,3,1,fp)==1  //题目给出数量（3 字节的整数），因此在读取shuliang时应当设置为读取3个字节，尽管我们定义int shuliang ，但是在文件中它是3个字节的 
		&&fread(&danjia,sizeof(danjia),1,fp)==1)
		//if(fread(&SP,sizeof(struct sp),1,fp)==1)
		{
			if(strcmp(name,pinming)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",pinming,guige,shuliang,danjia);
			}
		}
		else{
			break;
		}
	}
	if(flag==0){
		printf("\nmei you zhao dao shang ping :%s",name);
	}
    fclose(fp);
    return 0;
}
