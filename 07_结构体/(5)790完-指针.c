/*����Ĺ����ǣ� �Ӽ����϶��� 5 ��ѧ����������char (10)����ѧ�ţ�char (10)���ͳɼ���int����
	Ҫ��ɼ������� 0 ~ 100 ֮�䣬�������¶����ѧ����Ϣ��������������ѧ����ѧ�š����ֺͷ�����
ע�� Ҫ����ָ����ɺ����нṹ����������Ĵ����Լ���������Ԫ�صķ��ʣ����ʽṹ���Աʱʹ�á�->�� ��ʽ���Զ��庯��ͷ�ͺ������в��ó��������±���ʽ�ı�ʾ����*/
/*
ע�⣺
1. ����(student+i)->name/student->name�ǵ��������;��� name���������ͣ�����name���ַ�������������һ����ַ���Ͳ���Ҫ��&���� 
2. ������ָ�����ָ��ṹ���� Ҳ������ָ�����ָ��ṹ������еĳ�Ա��
	Ҫע��ָ����������ͱ���������ָ�������������ͬ��
	��ָ�����ָ��ṹ�����ʱ,��ָ�������1�����������ṹ�����������һ����Ա��
*/
#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ṹ��Ķ��塢����ԭ�������ȣ���������) */
struct stu{
	char name[10];
	char num[10];
	int score;
};

void input(struct stu *student,int n);
void output(struct stu *student,int n);
/* User Code End(������Ӵ������) */

int main(void)
{  
	struct stu stud[5];	 
	
	input(stud, 5);   
	printf("\nfailed the exam: ");  
	output(stud, 5);
	
	return 0; 
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
void input(struct stu *student,int n){
	int i,temp;
	for(i=0;i<n;i++){
		printf("student %d: ",i+1);
		scanf("%s%s",(student+i)->name,(student+i)->num); //>>>(student+i)->name���������;���name���������ͣ�����name���ַ�������������һ����ַ���Ͳ���Ҫ��&���� 
		//printf("%s %s\n",(student+i)->name,(student+i)->num);
		scanf("%d",&temp);
		if(temp>=0&&temp<=100){
			(student+i)->score=temp;
		}
		else{
			printf("error score! input again!\n");
			i=i-1;
		}
		}
	}

void output(struct stu *student,int n){
	int i;
	for(i=0;i<n;i++){
		if((student+i)->score<60){
			printf("%s/%s,%d\t",(student+i)->num,(student+i)->name,(student+i)->score);
		}
	}
}
