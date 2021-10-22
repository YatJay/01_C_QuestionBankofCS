#include<stdio.h>
#include<math.h>

int day(int nn, int yy, int rr);

int main(void)
{
	int n1, y1, r1, n2, y2, r2, days;

	printf("from the date (****/**/**):\n");
	scanf("%d/%d/%d", &n1, &y1, &r1);

	printf("to the date(****/**/**):\n");
	scanf("%d/%d/%d", &n2, &y2, &r2);

	days = abs(day(n1, y1, r1) - day(n2, y2, r2));
	
	printf("%d\n%d",day(n1, y1, r1),day(n2, y2, r2)) ;

	printf("\nsum=%d\n", days);

	return 0;
}

int day(int nn, int yy, int rr)
{
	int sum = 0, i, a1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (i = 1; i < nn; i ++)
	{
		if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
		{
			sum = sum + 366;
		}
		else
		{
			sum = sum + 365;
		}
	}
	for ( i = 0; i < yy - 1; i ++)
	{
		sum = sum + a1[i];
	}
	sum = sum + rr;
	if ((i % 400 == 0 || (i % 100 != 0 && i % 4 == 0)) && yy > 2)
	{
		sum ++;
	}
	return sum;
}




