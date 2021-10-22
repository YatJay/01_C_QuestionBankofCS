/*从键盘读入一行字符（约定：字符数 ≤ 127 字节，其中的空格不固定、有多有少）和加密间隔（假定只输入正整数），将加密后的文字输出。
	具体加密方法示例为：对于输入“1 2 3 4 5 6 7 8 9abcd ef ghiA BCD EFG HI XYZ”、加密间隔为9，
	先去掉输入中的空格后输出为： 123456789abcdefghiABCDEFGHIXYZ，然后按间隔 9 分组：
		123456789
		abcdefghi
		ABCDEFGHI
		XYZ
	输出密码的方法为：从第 1 组开始，依次从每组各取 1 字符输出，每一轮取完后输出一个空格，则以上
	输入的密码输出为： 1aAX 2bBY 3cCZ 4dD 5eE 6fF 7gG 8hH 9iI。*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str0[128],str1[128];
    int i,j,m,n,len;
    printf("Please input a string: ");
    gets(str0);
    printf("Please input n for gap: ");
    scanf("%d",&m);
    
    for(i=0,j=0;str0[i]!='\0';i++){
    	if(str0[i]!=' '){
    		str1[j]=str0[i];
    		j++;
		}
	}
	str1[j]='\0';
	printf("Delete the space: %s\n",str1);
	
	printf("The string after gap: \n");
	for(i=0;str1[i]!='\0';i++){
		if((i+1)%n==0){
			printf("%c\n",str1[i]);
		}
		else{
			printf("%c",str1[i]);
		}
	}
	
	len=strlen(str1);
	n=len/m+1;
	printf("The result is :");
	for(i=0;str1[i]!='\0';i++){
		
	}
	
    
    
    return 0;
}
