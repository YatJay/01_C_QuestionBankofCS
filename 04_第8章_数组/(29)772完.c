/*对从键盘输入的一行字符（约定：字符数 ≤ 127 字节）进行排序（按每个字符的 ASCII 码由小到大）并输出。
注：程序中不能使用库函数 gets()、 fgets() 或使用同名的变量、函数、单词。*/

/*
字符数组排序：
	字符以ASCII码的形式存储，本质上就是数字，因此对字符数组排序时直接当做数字处理-比较大小 
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[128],c,temp;
    int i,j,len;
    printf("Please input a line of character: ");
    for(i=0;;i++){
    	c=getchar();
    	if(c!='\n'){
    		str[i]=c;
		}
		else{
			break;
		}
	}
	str[i]='\0';
	
	printf("The string before sorted:");
	for(i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	} 
	printf("\n");
	
	len=strlen(str);
	for(j=1;j<=len-1;j++){
		for(i=0;i<=len-j-1;i++){
			if(str[i]>str[i+1]){
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
			}
		}
	}
	
	printf("The string after sorted:");
	for(i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	} 
	
	
    
    return 0;
}
