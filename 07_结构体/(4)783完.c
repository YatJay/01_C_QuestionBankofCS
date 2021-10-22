/*����Ĺ����ǣ� ĳ���� 4 ��ѧ�������ſΣ�ͨ�� main() ��������ѧ����ѧ�ţ�5 λ���֣����գ�� 7���ַ��������ſεĳɼ���
	Ȼ��ͨ�������û��Զ��庯�� DispScore() ʵ����Щ��Ϣ������������û��Զ��庯�� FindNoPass() ʵ���ҳ����������ϲ������ѧ���������ѧ�źͲ�����γ̵ĳɼ���
ע�� Ҫ���ýṹ����*/
/*
1.�м��мǣ������ַ��������ע�⣬Ҫ��ѧ��5λ���֣����Ǽ���'\0'һ����Ҫ6λ(scanf(%s)���Զ�����)�����������һλ����������
*/

#include<stdio.h>

#define SNUM 4 /* student number */
#define CNUM 3 /* course number */

/* User Code Begin(�������ڱ��к���Ӵ��룬����ṹ��Ķ��塢����ԭ�������ȣ���������) */
struct student{
	char num[6];  //>>>�����Ǹ�����֪����ȷ���������ַ��������ע�⣬Ҫ��ѧ��5λ���֣����Ǽ���'\0'һ����Ҫ6λ(scanf(%s)���Զ�����)�����������һλ���������� 
	char name[8];
	int score[CNUM];
};

void DispScore(struct student stu[]);
void FindNoPass(struct student stu[]);





/* User Code End(������Ӵ������) */

int main(void)
{
	int i, j;
	struct student stu[SNUM];

	printf("Please input student num name and score:\n");
	for (i=0; i<SNUM; i++)
	{ 
		printf("Student %d: ", i+1);
		scanf("%s %s",stu[i].num, stu[i].name);
		for (j=0; j<CNUM; j++)
		{
			scanf("%d", &stu[i].score[j]);
		}
	}
	
	DispScore(stu);
	FindNoPass(stu);

	return 0;
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
void DispScore(struct student stu[]){
	int i,j;
	printf("\nStudent Info and Score:\n");
	for (i=0; i<SNUM; i++){ 
		printf("Student %d: ", i+1);
		printf("%6s %8s\t", stu[i].num, stu[i].name);
		for (j=0; j<CNUM; j++)
		{
			printf("%5d ",stu[i].score[j]);
		}
		puts("\n");
	}
	printf("\n--------------------------------------------\n");
}

void FindNoPass(struct student stu[]){
	int i,j,count;
	printf("Two Course No Pass Student:\n");
	for (i=0; i<SNUM; i++){
		count=0;
		for (j=0; j<CNUM; j++){
			if(stu[i].score[j]<60){
				count++;
			}
		}
		if(count>=2){
			printf("%6s %8s\t", stu[i].num, stu[i].name);
			for (j=0; j<CNUM; j++){
				printf("%5d\t",stu[i].score[j]);
				}
				puts("\n");
			}
		}
	printf("--------------------------------------------\n");		
	}
	
