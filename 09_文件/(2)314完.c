/*有一存储很多商品数据（每件商品的属性先后包括：品名、规格、单价（有小数位）、数量，
数据的最长长度分别为 20、 10、 6、 5，在文件中以空格为分隔，每个商品的数据占一行）的文本文件，
从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品（可能有多条记录或没有），
若有则在屏幕上显示出相应的商品的品名、规格、数量、单价（显示时，品名、规格、数量、单价之间使用逗号“,” 作分隔，单价显示时只显示 2 位小数），
若无则显示没有相应品名的商品。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct goods{
	char pinming[20];
	char guige[10];
	float danjia;
	long int shuliang;
}GOODS;
int main(void){
	char input[20];
	int flag=0;
	FILE *fp;
	GOODS SP;
	
	printf("Please input the shang pin ming: ");
	gets(input);
	
	fp=fopen("sp.txt","r");
	if(fp==NULL){
		printf("Open file error!");
		exit(0);
	}
	while(!feof(fp)){
		if(fscanf(fp,"%s %s %f %ld",SP.pinming,SP.guige,&SP.danjia,&SP.shuliang)==4){
			if(strcmp(SP.pinming,input)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",SP.pinming,SP.guige,SP.shuliang,SP.danjia);
			}
		}
		else{
			break;
		}
	}
	if(flag==0){
		printf("\nmei you zhao dao shangping:%s",input);
	}
	fclose(fp);
}
