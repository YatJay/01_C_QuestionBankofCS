/*某班有 40 位同学参加考试，成绩（整数）从键盘输入，求全班最高分、最低分以及平均分，并统计该班同学的考试及格率。*/

#include <stdio.h>
int main(void)
{
    int score[40],max,min,sum,i,j,temp,count=0;
    float avg,rate;
    printf("Input the score: ");
    for(i=0;i<40;i++){
    	scanf("%d",&score[i]);
	}
	
	for(i=0;i<40;i++){
    	sum+=score[i];
	}
	avg=(float)sum/40;
	
	for(i=0;i<40;i++){
    	if(score[i]>=60){
    		count++;
		}
	}
	rate=(float)count/40;
	
	for(j=1;j<=40-1;j++){
		for(i=0;i<=40-j-1;i++){
			if(score[i]>score[i+1]){
				temp=score[i];
				score[i]=score[i+1];
				score[i+1]=temp;
			}
		}
	}
	
	
	printf("The maxium score is %d.\n",score[39]);
	printf("The minium score is %d.\n",score[0]);
	printf("The average score is %.1f.\n",avg);
	printf("The passing rate is %.2f%%.\n",rate*100);
	   
    return 0;
}
