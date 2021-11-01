/*编程在一个已知的字符串（约定：字符数 ≤ 127 字节）中查找最长单词，输出最长单词的长度。
注意事项：
1. 只考虑输入的字符串中仅含空格和其它可见字符，仅用空格用来分隔不同单词。
2. 字符串中可能只有 1 个单词。
3. 字符串中可能 1 个单词都没有，此时最长单词的长度为 0。*/

#include <stdio.h>
int main(void){
    char str[128];
    int i,j;
    int wordlen=0,maxlen=0;
    printf("Please input a string: ");
    scanf("%s",str);
    
    for(i=0;str[i]!='\0';i++){
    	if(str[i]!=' '){
    		wordlen++;
		}
		else{
			if(wordlen>maxlen){
				maxlen=wordlen;
			}
			wordlen=0;
		}	
	}
    printf("The max lenth of word is %d\n",maxlen);
    return 0;
}
