/*
��֪ĳ����������ȡ��ͬ���޵���Ϣ���ʷֱ�Ϊ�� 
3.15% ����һ�꣬ 3.63% ���޶��꣬ 4.02% �������꣬ 4.69% �������꣬ 5.36% ���ް��ꡣ
�Ӽ����������Ǯ�ı�����ԪΪ��λ�� ���붨��Ϊ int ��Ӧ���ǽ��ܴ��������ʹ�����ޣ�ֻ���� 1�� 2�� 3�� 5�� 8����
����ʱ�ܴ����еõ�����Ϣ����ԪΪ��λ��Ӧ������С�������Ƹ�������*/

/*
����ʵ����Ҫ����δ���ǽ��ܴ���������û��ʹ��switch 
*/
#include <stdio.h>
int main(void)
{
    int benjin,qixian;
    float lixi;
	printf("Please input benjin and qixian:\n");
	scanf("%d %d",&benjin,&qixian);
	if(qixian==1) lixi = benjin * 0.0315 * 1;
	if(qixian==2) lixi = benjin * 0.0363 * 2;
	if(qixian==3) lixi = benjin * 0.0402 * 3;
	if(qixian==5) lixi = benjin * 0.0469 * 5;
	if(qixian==8) lixi = benjin * 0.0536 * 8;
	
	printf("lixi = %.2f yuan\n",lixi);
	
    
    return 0;
}
