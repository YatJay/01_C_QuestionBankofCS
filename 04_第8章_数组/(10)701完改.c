/*�Ӽ��̶��� 10 ���������һ�������У�Ҫ���û���С�������롣������ֶ����ĳ����������С���������������Ч���������������������ݡ�
�ٽ��� 10 ���������������Ļ�ϣ�Ҫ��ÿ������������Ϊ5������ 5 λ��������߲��Ͽո�������֮��ʹ�ö��š�,���ָ���
Ȼ������һ������Ҫ���ҳ������������еڼ�������Ŵ� 1 ��ʼ���㣩Ԫ�ص�ֵ������������������У��������Not Find!����*/

#include<stdio.h>
#define N 10
int main(void)
{
	int arr[N], find,flag=0,i;

	printf("please input %d numbers: ", N);
	scanf("%d", &arr[0]);
	for (i=1;i<N;){    //�˴������ò�����ֻ�е���һ��Ԫ�ش���ǰһ��Ԫ��ʱ��ִ�в��� 
		scanf("%d", &arr[i]);
		if (arr[i] >= arr[i-1])
		{
			i++;  //ֻ�е���һ��Ԫ�ش���ǰһ��Ԫ��ʱ��ִ�в��� 
		}
	}

	for (i=0; i<N-1; i++){
		printf("%5d,", arr[i]);
	}
	
	printf("\ninput the arr to look for: ");
	scanf("%d", &find);
	for (i=0;i<N; i++){
		if (arr[i] == find){
			flag=1;
			break;
		}
	}

	if (flag==1){
		printf("\nthe position of %d is %d\n", find, i+1);
	}
	else{
		printf("\nNot Find!\n");
	}

	return 0;
}

