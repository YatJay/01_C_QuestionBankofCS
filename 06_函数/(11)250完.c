/*����Ĺ����ǣ� �Ӽ��̷ֱ���� 5 ������ arrA �С� 8 ������ arrB �У� �ٶ���һ���� num��Ȼ��ֱ�
�����Զ��庯�������� arrA �� arrB �в���С�� num ��Ԫ�ظ�����������ҽ����*/

#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int countSmaller(int array[],int n,int num);

int main(void)
{
	int arrA[5], arrB[8], num, countA, countB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	countA=countSmaller(arrA,5,num);//______________________________  /* userCode(<50�ַ�): ���ú�������arrA��С��num��Ԫ�ظ��� */
	printf("\nCount(arrA) = %d", countA);
	countB=countSmaller(arrB,8,num);//______________________________  /* userCode(<50�ַ�): ���ú�������arrB��С��num��Ԫ�ظ��� */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int countSmaller(int array[],int n,int num){
	int count=0,i;
	for(i=0;i<n;i++){
		if(array[i]<num){
			count++;
		}
	}
	return count;
} 

