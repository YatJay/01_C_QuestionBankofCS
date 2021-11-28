/*求 s = a + aa + aaa + aaaa + aa…a 的值，其中 a 是一个数字（可取 1 ~ 9 之间的一个值）。
例如 2 + 22+ 222 + 2222 + 22222（此时共有 5 个数相加），其中 a 值和有几个数相加由键盘输入控制。
注意 s 的值有可能超出 int 的范围。*/
#include <stdio.h>
int main(void)
{
	int an,num,i;
	double sum = 0, bn = 0;
	printf("Please input a,n: ");
	scanf("%d %d", &an, &num);
	
	bn=an;  //an作为个位上数字不能再做变动，把它赋给bn，每轮循环中bn做变动即可，bn即是每个加数 
	for (i = 1; i <= num; i++){
		sum += bn;
		bn = bn*10+an;
	}
	printf("\na+aa+...=%.0f\n", sum);
	return 0;
}
