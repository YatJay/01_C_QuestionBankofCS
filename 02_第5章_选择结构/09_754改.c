/*�Ӽ�������һ��һ�ٷ��Ƴɼ�����С�����������������ת���ɵȼ���ABCDEFGHIJX�� ��
90 ~ 100��A�� 
80 ~ 89��B�� 
70 ~ 79��C�� 
60 ~ 69��D�� 
50 ~ 59��E�� 
40 ~ 49��F�� 
30 ~ 39��G�� 
20 ~ 29��H�� 
10 ~ 19��I�� 
0 ~ 9��J�� �������볬������Χ��������Ϊ X��*/

/*
�����Ƿ������ֵȼ����⣬��������10�õ�ʮλ���֣������ø�ʮλ���ֽ���switch()�������ж� 
�����������븺���޷���� 
*/
#include<stdio.h>
int main(void)
{
	int score, m;
	char grade;

	printf("please input the score(0-100): ");

	scanf("%d", &score);
	m = score / 10;

	switch (m)
	{
		case 10:
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
			grade = 'E';
			break;
		case 4:
			grade = 'F';
			break;
		case 3:
			grade = 'G';
			break;
		case 2:
			grade = 'H';
			break;
		case 1:
			grade = 'I';
			break;
		case 0:
			grade = 'J';
			break;
		default :
			grade = 'X';
	}
	printf("\nscore=%d, grade=%c", score, grade);
	return 0;
}


