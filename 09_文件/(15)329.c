/*有若干（最多 50 人）学生的信息（学号、姓名、性别、出生年、 C 语言、英语、微积分）存储在名为“学生成绩.txt”的文本文件中，
信息的存储格式为信息标题占第 1 行，其余每行为一学生的信息，每一学生的信息项之间以 1 个或多个 TAB（制表符）作为分隔，假定每一学生的信息均是完整的，不存在错误。
编程计算这些学生的平均成绩，并以平均成绩从高到低、按图 329. 1 所示的格式在屏幕上输出这些学生的相关信息
*/

#include <stdio.h>
#include <stdlib.h> 
struct student{
	char *num;
	char *name;
	char *gender;
	char *bothyear;
	int CLang,english,math;
};

int main(void)
{
    FILE *fp;
    char chL1;
    struct student stu[50];
    int i;
    fp=fopen("学生成绩.txt","r");
    if(fp==NULL){
    	printf("File open error.");
    	exit(0);
	}
	while(chL1=getc(fp)!='\n'){
		putchar(chL1);
	}
	
	i=0;
	while(!feof(fp)){
		if(fscanf(fp,"%s%s%s%s%d%d%d",stu[i].num,stu[i].name,stu[i].gender,stu[i].bothyear,&(stu[i].CLang),&(stu[i].english),&(stu[i].math))==7){
			printf("%s %s %s %s %d %d %d\n",stu[i].num,stu[i].name,stu[i].gender,stu[i].bothyear,stu[i].CLang,stu[i].english,stu[i].math);
			i++;
		}
		else{
			printf("error");
		}
		
		
	}
	
    
    return 0;
}
