/*程序的功能是：
1. 程序运行时先显示“Please input numbers:”，再从键盘上读入一组整数（只考虑 int 型），数与
	数之间只使用空格或回车作分隔。数可正可负，最多 10000 个，但若读入的数为 -222 时，则表示
	输入结束且 -222 不算在该组数内。
2. 对这一组数按从小到大的顺序进行排序。
3. 将排序后的这一组数输出到屏幕上，输出格式为每行 6 个数，数与数之间使用逗号“,”分隔，
	两个逗号之间的宽度（不算逗号）为 6 且使用左对齐格式。注意，行尾没有逗号。*/
	
#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=3, lineLen<=50, 考生可在本行后添加代码、最多3行、每行长<=50字符) */
int inputArray(int array[],int maxLen);
void sortArray(int array[],int count);
void printArray(int array[],int count);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int inputData[maxNums] = {0}, dataCount;  /* inputData用于保存输入的数据，dataCount记录输入数据的个数 */

	/* 本部分代码功能建议：调用相应的函数先后完成数据的输入、排序和输出 */
	/* User Code Begin(Limit: lines<=3, lineLen<=40, 考生可在本行后添加代码、最多3行、行长<=40字符) */
	dataCount=inputArray(inputData,maxNums);
	sortArray(inputData,dataCount);
	printArray(inputData,dataCount);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	return 0;
}

/* 本部分代码功能建议：完成数据的输入 */
/* User Code Begin(Limit: lines<=11, lineLen<=60, 考生可在本行后添加代码、最多11行、每行长<=60字符) */
int inputArray(int array[],int maxLen){
	int i,count=0,temp;
	printf("Please input the numbers(end with '-222'): ");
	for(i=0;i<maxLen;i++){
		scanf("%d",&temp);
		if(temp!=-222){
			array[i]=temp;
			count++;
		}
		else{
			break;
		}
	}
	return count;
} 
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */


/* 本部分代码功能建议：对数据进行排序 */
/* User Code Begin(Limit: lines<=11, lineLen<=60, 考生可在本行后添加代码、最多11行、每行长<=60字符) */
void sortArray(int array[],int count){
	int i,j,temp;
	for(i=1;i<=count-1;i++){
		for(j=0;j<=count-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}

/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

/* 本部分代码功能建议：按格式要求输出 */
/* User Code Begin(Limit: lines<=10, lineLen<=60, 考生可在本行后添加代码、最多10行、每行长<=60字符) */
void printArray(int array[],int count){
	int i;
	printf("\nOutput:\n");
	for(i=0;i<count;i++){
		if((i+1)%6==0){
			printf("%-6d\n",array[i]);
		}
		else{
			printf("%-6d,",array[i]);
		}
	}
}
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
/* Program End(程序到此结束，此后不能添加内容，否则0分) */
