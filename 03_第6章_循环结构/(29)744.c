/*�Ӽ�������һ��һ�ٷ��Ƴɼ���������� 0 ~ 100 ��Χ�ڣ���Ҫ�������������ݣ�ֱ������������� 0~ 100 ��Χ�ڡ�
�����������ת���ɵȼ���A�� ��B�� ��C�� ��D�� ��E����
90 ������Ϊ��A���� 
80 ~ 89 ��Ϊ��B���� 
70 ~ 79 ��Ϊ��C����
60 ~ 69 ��Ϊ��D�� �� 
60 ������Ϊ��E����
Ҫ��ʹ�� switch()�� case�� default ���������ʹ�� 5 �� case ��֧�������ֵ������ score���������� grade
��ֵ�������Ļ�ϡ�
ע�������������͵�ѡ��Ӧ�ʵ����ڱ�֤�������Ҫ�󾫶ȵ�����£����ɲ��˷��ڴ�ռ�ͼ���ʱ��
�ĺ�ϰ�ߡ�*/

/*
do-whileѭ��
��ִ��ѭ���е���䣬
Ȼ�����жϱ��ʽ�Ƿ�Ϊ�棬���Ϊ�������ѭ����
���Ϊ�٣�����ֹѭ����
��ˣ�do-whileѭ������Ҫִ��һ��ѭ����䡣��ִ�й��̿�����ͼ��ʾ�� 
*/
#include <stdio.h>
int main(void)
{
    int score,shi;
    char grade;
    do{
    	printf("Please input the score(0~100):");
    	scanf("%d",&score);
    }while(score<0||score>100);  //��Ϊ�������ѭ��
	
	shi=score/10;
	switch(shi){
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			grade = 'E';
			break;
		default:
			printf("error");
	}
	printf("score = %d,grade = %c\n",score,grade);
    
	    
    return 0;
}
