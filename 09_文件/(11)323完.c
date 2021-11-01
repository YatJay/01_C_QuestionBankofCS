/*在文本文件“Comp.txt” 里有需要计算结果的整数算式，每个算式占一行且文件中只有一个算式，
	运算类型只有“加法（+）” “减法（-）” “乘法（*）”且运算符前后至少有一个空格。计算该算式的结果并在屏幕上显示。*/

/*
答案不同：在计算算式的过程中，答案定义了计算函数Fn来完成算式计算 
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,c,res;
    char op1,op2;
    
    fp=fopen("Comp323.txt","r");
    if(fp==NULL){
    	printf("File open error!");
    	exit(0);
	}
	
	fscanf(fp,"%d %c %d %c %d",&a,&op1,&b,&op2,&c);
	if(op1=='+'){
		if(op2=='+'){
			res=a+b+c;
		}
		else if(op2=='*'){
			res=a+b*c;
		}
	}
	else if(op1=='*'){
		if(op2=='+'){
			res=a*b+c;
		}
		else if(op2=='*'){
			res=a*b*c;
		}
	}
	
    printf("\n%d %c %d %c %d= %d",a,op1,b,op2,c,res);
    fclose(fp);
    return 0;
}
