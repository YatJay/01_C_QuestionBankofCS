/*�� scanf() ����Բ�뾶 r�� Բ���� h����Բ�ܳ� C��C = 2��r�� ��Բ��� S��S = ��r^2�� ��Բ����� V��V =��r^2h�� ��*/

/*
ϸ�ڣ�
1.scanf()�����������룬 
��ʽ�����ַ������зǸ�ʽ�ַ�������ԭ�����롣��A=%d,b=%c
����ʽ�����ַ�����û�зǸ�ʽ�ַ�������������֮��ļ��������ÿո�Tab���س����������%d%c
*/
#include <stdio.h>
int main(void)
{
    int r,h;
    float C,S,V;
    float PI = 3.14;
    
	printf("Input:");
    scanf("r=%d,h=%d",&r,&h);
    C = 2*PI*r;
    S = PI*r*r;
    V = S*h;
    printf("\nC=%.2f\nS=%.2f\nV=%.2f\n",C,S,V);
    
    return 0;
}
