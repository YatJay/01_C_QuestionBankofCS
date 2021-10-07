/*从键盘读入一行字符（约定：字符数 ≤ 127 字节），统计及输出其中的字母、数字、空格和其他符号的个数。*/
#include <stdio.h>
int main(void)
{
    char str[128];
    int letter=0,number=0,space=0,other=0,i;
    printf("Please input a string: ");
    gets(str);
    //此处循环遍历字符数组，循环体执行条件错误，应该使用str[i] !='\0'作为执行循环体的条件，详细见改动版本 
    for(i=0;i<=127;i++){
    	if(str[i]>=1&&str[i]<=9){
    		number++;
		}
		else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			letter++;
		}
		else if(str[i]==' '){
			space++;
		}
		else{
			other++;
		}
	}
	printf("letter is %d,number is %d,space is %d,other is %d\n",letter,number,space,other);
    
    return 0;
}
