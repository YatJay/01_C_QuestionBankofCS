/*一个球从 10000 m 高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。求它在第 n（n
从键盘输入）次落地时，共经过多少米， 第 n 次反弹多高。*/
#include <stdio.h>
int main(void)
{
	int num, i;
	double hn = 10000, sn = 10000;
	printf("Please input n: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++){
		hn /= 2;
		sn += hn * 2;
	}
	sn -= hn * 2;
	printf("\nsn=%f,hn=%f\n", sn, hn);
    
    return 0;
}
