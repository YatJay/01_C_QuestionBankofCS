/*
��֪ĳ����������ȡ��ͬ���޵���Ϣ���ʷֱ�Ϊ�� 
3.15% ����һ�꣬ 3.63% ���޶��꣬ 4.02% �������꣬ 4.69% �������꣬ 5.36% ���ް��ꡣ
�Ӽ����������Ǯ�ı�����ԪΪ��λ�� ���붨��Ϊ int ��Ӧ���ǽ��ܴ��������ʹ�����ޣ�ֻ���� 1�� 2�� 3�� 5�� 8����
����ʱ�ܴ����еõ�����Ϣ����ԪΪ��λ��Ӧ������С�������Ƹ�������*/

#include <stdio.h>
int main(void)
{
    long int capital;//��ĿҪ����int�ܴ��������ʹ��long������ 
    int term;
    float interest;
    
    printf("Please input the capital & term\n");
    scanf("%ld %d",&capital,&term);
    switch(term){//�����ʺ�ʹ��switch�����з��� ��ע��breakʹ�ü�ʱ����switch 
    	case 1:
    		interest = capital*0.0315*1;
    		break;
    	case 2:
    		interest = capital*0.0363*2;
    		break;
    	case 3:
    		interest = capital*0.0402*3;
    		break;
    	case 5:
    		interest = capital*0.0469*5;
    		break;
    	case 8:
    		interest = capital*0.0536*8;
    		break;
    	default:
    		printf("Invalid term input.");
	}
	
	printf("Your interest is %.2f yuan\n",interest);
    
    return 0;
}
