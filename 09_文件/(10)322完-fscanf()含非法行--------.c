/*在文本文件“Comp.txt”里有需要计算结果的整数算式，每个算式占一行且文件中有多个算式，
运算类型只有“加法（+）”或者“减法（-）”且运算符前后至少有一个空格——
但其中可能有空行和不符合要求的算式（但其行长肯定不超过 200 字节）。
计算这些算式的结果并在屏幕上显示，空行不作任何处理，不符合要求的算式则显示“Error!” 。*/

/*
注意：
1.sscanf()函数用于从字符串中读取指定格式的数据
    【原型】int sscanf (char *str, char * format [, argument, ...]);
	【参数】参数str为要读取数据的字符串；format为用户指定的格式；argument为变量，用来保存读取到的数据。
	【返回值】成功则返回参数数目，失败则返回-1，错误原因存于errno 中。
	sscanf()会将参数str 的字符串根据参数format（格式化字符串）来转换并格式化数据（格式化字符串请参考scanf()）， 转换后的结果存于对应的变量中。
	sscanf()与scanf()类似，都是用于输入的，只是scanf()以键盘(stdin)为输入源，sscanf()以固定字符串为输入源。
2.本题为何先调用fgets()将一行内容读入到buff中再对buff字符串进行sscanf()格式化读取？ 
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int a,b,res,i;
    char op;
    char buff[201];
    
    fp=fopen("Comp322.txt","r");
    if(fp==NULL){
    	printf("Open file error.\n");
    	exit(0);
	}
	
	i=1;
	while(!feof(fp)){
		if(fgets(buff,201,fp)==NULL){  //
			break;
		}
		if(sscanf(buff,"%d %c %d",&a,&op,&b)==3){
			switch(op){
				case '+':
					res=a+b;
					break;
				case '-':
					res=a-b;
					break;
				default:
					break;
			}
			printf("L00%d:%d %c %d = %d\n",i,a,op,b,res);
		}
		else{
			printf("L00%d:Error!\n",i);
		}
		i++;
	}
    
    fclose(fp);
    return 0;
}
