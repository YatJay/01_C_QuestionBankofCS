/*�Ӽ��̶���һ���� n����������� n �ĸ�λ��������� n �ĸ�λ��֮��*/
#include <stdio.h> 
int fun(int n); //����n�ĸ�λ����֮�͡��ݹ麯��.
int main(){
    int n, sum;
    printf("Input n:");
    scanf("%d",&n);
    sum = fun(n);
    printf("\nsum = %d\n",sum);
    return 0;
}
int fun(int n){ //����n�ĸ�λ����֮�͡��ݹ麯��.
    if (n<10){
    	printf("%d ",n);
        return n;
    }
    else{ 
    	printf("%d ",n%10);
        return n%10+fun(n/10);  //ע��˴���ֵ�������n/10��ֵ��Ĩȥĩβһλ���ֺ���� 
    }
}
