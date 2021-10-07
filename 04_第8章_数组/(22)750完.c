/*输入字符串 s（约定：字符数 ≤ 100 字节），将字符串 s 中所有字符“*” 删除，并将修改后的字符串显示出来。*/

#include <stdio.h>
int main(void)
{
    char str0[100],str1[100];
	int i,j;
    printf("Please input a string: ");
    gets(str0);
    for(i=0,j=0;str0[i]!='\0';i++){
    	if(str0[i]!='*'){
    		str1[j]=str0[i];
    		j++;
		}
	}
	str1[j]='\0';
	printf("\nThe result is %s",str1); 
    return 0;
}
