/*������������ m �� n��������ڵ��� m��m > 5���� n ������������ĸ��������Կո������
ע��������Prime Number�������������ָ��һ������ 1 ����Ȼ���У����� 1 �ʹ����������⣬û��
��������Ȼ������������*/
#include <stdio.h>
int main(void)
{
    int m0, n0, i, flag = 0, count = 0, j;
    printf("Input the m, n: ");
    scanf("%d %d", &m0, &n0);
    printf("\nThe result:\n");
    for (j = m0;; j++){
        flag = 0;
        //�ڲ�ѭ��ֻ����Ƿ�Ϊ���� �����޸ı�־λ 
        for (i = 2; i < j; i++){
            if (j % i == 0){  //һ����������������ֱ�ӽ���־λ��Ϊ1������������ѭ��
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("%d ", i);
            count++;
        }
        if (count == n0){
            break;
        }
    }
    putchar('\n');
    return 0;
}
