/*����Ĺ����ǣ�
1. ��������ʱ����ʾ��Please input numbers:�����ٴӼ����϶���һ��������ֻ���� int �ͣ�������
	��֮��ֻʹ�ÿո��س����ָ����������ɸ������ 10000 ���������������Ϊ -222 ʱ�����ʾ
	��������� -222 �����ڸ������ڡ�
2. ����һ��������С�����˳���������
3. ����������һ�����������Ļ�ϣ������ʽΪÿ�� 6 ������������֮��ʹ�ö��š�,���ָ���
	��������֮��Ŀ�ȣ����㶺�ţ�Ϊ 6 ��ʹ��������ʽ��ע�⣬��βû�ж��š�*/
	
#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=3, lineLen<=50, �������ڱ��к���Ӵ��롢���3�С�ÿ�г�<=50�ַ�) */
int inputArray(int array[],int maxLen);
void sortArray(int array[],int count);
void printArray(int array[],int count);
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int inputData[maxNums] = {0}, dataCount;  /* inputData���ڱ�����������ݣ�dataCount��¼�������ݵĸ��� */

	/* �����ִ��빦�ܽ��飺������Ӧ�ĺ����Ⱥ�������ݵ����롢�������� */
	/* User Code Begin(Limit: lines<=3, lineLen<=40, �������ڱ��к���Ӵ��롢���3�С��г�<=40�ַ�) */
	dataCount=inputArray(inputData,maxNums);
	sortArray(inputData,dataCount);
	printArray(inputData,dataCount);
	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	return 0;
}

/* �����ִ��빦�ܽ��飺������ݵ����� */
/* User Code Begin(Limit: lines<=11, lineLen<=60, �������ڱ��к���Ӵ��롢���11�С�ÿ�г�<=60�ַ�) */
int inputArray(int array[],int maxLen){
	int i,count=0,temp;
	printf("Please input the numbers(end with '-222'): ");
	for(i=0;i<maxLen;i++){
		scanf("%d",&temp);
		if(temp!=-222){
			array[i]=temp;
			count++;
		}
		else{
			break;
		}
	}
	return count;
} 
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */


/* �����ִ��빦�ܽ��飺�����ݽ������� */
/* User Code Begin(Limit: lines<=11, lineLen<=60, �������ڱ��к���Ӵ��롢���11�С�ÿ�г�<=60�ַ�) */
void sortArray(int array[],int count){
	int i,j,temp;
	for(i=1;i<=count-1;i++){
		for(j=0;j<=count-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}

/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

/* �����ִ��빦�ܽ��飺����ʽҪ����� */
/* User Code Begin(Limit: lines<=10, lineLen<=60, �������ڱ��к���Ӵ��롢���10�С�ÿ�г�<=60�ַ�) */
void printArray(int array[],int count){
	int i;
	printf("\nOutput:\n");
	for(i=0;i<count;i++){
		if((i+1)%6==0){
			printf("%-6d\n",array[i]);
		}
		else{
			printf("%-6d,",array[i]);
		}
	}
}
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
/* Program End(���򵽴˽������˺���������ݣ�����0��) */
