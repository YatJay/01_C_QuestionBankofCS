/*�������һ�� m �� m �����������������ڵ��������� m��2 �� m �� 20��������Ԫ�شӼ������루ֻ���� int �ͣ��Ҳ��迼����͵Ľ�����ܳ��� int ���ܱ�ʾ�ķ�Χ����*/

#include <stdio.h>
int main(void)
{
    int m,a[20][20];
    int i,j,max,maxi,maxj;
    do{
    	printf("Please input the m for low&column: ");
    	scanf("%d",&m);
	}while(m<2||m>20);
	
	printf("Please input tha item: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0,max=a[0][0];i<m;i++){  //��ע�⣬��ά�������ֵ���󷨣�max=a[0][0]�������ֵ����ѭ����������ѭ����ÿ�ν���ѭ����������max=a[0][0]
		for(j=0;j<m;j++){
			if(max<=a[i][j]){
				max=a[i][j];
				maxi=i;
				maxj=j;
			}
		}
	}
	
	printf("max=%d\nmaxi=%d\nmaxj=%d",max,maxi,maxj);
    return 0;
}
