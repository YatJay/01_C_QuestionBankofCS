/*���� P242.c �ѱ�д���ִ��루���ļ����ݣ� ������ݳ����е�Ҫ�����Ƴ�����ָ����λ����Ӵ����__________���ɴ��룩��
����Ĺ����ǣ��Ӽ��̶������ɸ����������� -1 ����� 16 �������������룩 ��Ȼ���������Щ����*/

#include <stdio.h>

int input(int array[]);//______________________________  /* userCode(<50�ַ�): �Զ��庯��1֮ԭ������ */
void printReverse(int array[],int n);//______________________________  /* userCode(<50�ַ�): �Զ��庯��2֮ԭ������ */

int main(void)
{
	int num[16], count;

	printf("���������ɸ���: ");
	count=input(num);//______________________________  /* userCode(<30�ַ�): ���ú����������ݵ�num�в�ͳ�Ƹ��� */

	printf("\n��%d����������Ϊ: ", count);
	printReverse(num,count);//______________________________  /* userCode(<30�ַ�): ���ú����������num������Ԫ�� */

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
//>>>�˺��������ͳ�������Ԫ�ظ���(���������)�Ĺ��ܣ������䷵��ֵΪ����ֵ 
int input(int array[]){
	int i,temp,cnt=0;
	for(i=0;i<16;i++){
		scanf("%d",&temp);
		if(temp!=-1){
			array[i]=temp;
			cnt++;
		}
		else{
			break;
		}
	}
	return cnt;
}

void printReverse(int array[],int cnt){
	int i;
	for(i=cnt-1;i>=0;i--){
		printf("%d ",array[i]);
	}
}
