/*�����һ����֪���ַ�����Լ�����ַ��� �� 127 �ֽڣ��в�������ʣ��������ʵĳ��ȡ�
ע�����
1. ֻ����������ַ����н����ո�������ɼ��ַ������ÿո������ָ���ͬ���ʡ�
2. �ַ����п���ֻ�� 1 �����ʡ�
3. �ַ����п��� 1 �����ʶ�û�У���ʱ����ʵĳ���Ϊ 0��*/

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
