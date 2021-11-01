/*有一存储很多商品数据（每件商品的属性先后包括：品名、规格、数量、单价，
	编程时相应的数据类型分别定义为字符串 char (18)、字符串 char (12)、 long、 float）的二进制文件“sp38.dat”
	（即未作任何格式转换而直接使用 fwrite() 将商品属性写入文件），从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价（显示时，品名、规格、数量、单价之间使用逗号“,”作分隔），若无则显示没有相应品名的商品。*/

/*
----为何提示---对于结构体方法， 使用 fread() 与 sizeof(结构体) 肯定不对，应单项属性逐个 fread()。 
对比319.c应该是所给提示的几个属性的大小有问题，使用结构体无法对齐 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sp{
	char pinming[18];
	char guige[12];
	long int shuliang;
	float danjia;
};

int main(void)
{
    FILE *fp;
    struct sp SP;
    char name[18];
    int flag=0;
    
    fp=fopen("sp38.dat","rb");
    if(fp==NULL){
    	printf("Open file error.");
    	exit(0);
	} 
	printf("Please input the name of goods:");
	scanf("%s",name);
	printf("cha xun jie guo:\n");
	
	while(!feof(fp)){
		if(fread(SP.pinming,sizeof(SP.pinming),1,fp)==1
		&&fread(SP.guige,sizeof(SP.guige),1,fp)==1
		&&fread(&SP.shuliang,sizeof(SP.shuliang),1,fp)==1
		&&fread(&SP.danjia,sizeof(SP.danjia),1,fp)==1)
		//if(fread(&SP,sizeof(struct sp),1,fp)==1)
		{
			if(strcmp(name,SP.pinming)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",SP.pinming,SP.guige,SP.shuliang,SP.danjia);
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
