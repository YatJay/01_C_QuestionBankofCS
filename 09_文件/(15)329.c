/*�����ɣ���� 50 �ˣ�ѧ������Ϣ��ѧ�š��������Ա𡢳����ꡢ C ���ԡ�Ӣ�΢���֣��洢����Ϊ��ѧ���ɼ�.txt�����ı��ļ��У�
��Ϣ�Ĵ洢��ʽΪ��Ϣ����ռ�� 1 �У�����ÿ��Ϊһѧ������Ϣ��ÿһѧ������Ϣ��֮���� 1 ������ TAB���Ʊ������Ϊ�ָ����ٶ�ÿһѧ������Ϣ���������ģ������ڴ���
��̼�����Щѧ����ƽ���ɼ�������ƽ���ɼ��Ӹߵ��͡���ͼ 329. 1 ��ʾ�ĸ�ʽ����Ļ�������Щѧ���������Ϣ
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
    fp=fopen("ѧ���ɼ�.txt","r");
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
