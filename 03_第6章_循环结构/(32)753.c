/*���� x �� y �η������� y Ϊ�����������Ǹ������� 0���� x Ϊʵ�͡�
ע�� �����в���ʹ�ÿ⺯�� pow() ��ʹ��ͬ���ı��������������ʡ�*/
#include <stdio.h>
int main(void)
{
	double x,r=1.0;
    int y,i;
    printf("Please input x & y: ");
    scanf("%lf %d",&x,&y);
    //��Ҫ��ָ������>=0��<0�������� 
    if(y<0){
    	for(i=1;i<=(0-y);i++){
    		r=r*x;
		}
		r=1/r;  //��Ҫ��ѭ����ȡ������ѭ����ֻ����˻�����ѭ���ټ��㵹�� 
	}
	else if(y>=0){
		for(i=1;i<=y;i++){
			r=r*x;
		}
	}
	printf("%f^%d=%f",x,y,r);
    return 0;
}
