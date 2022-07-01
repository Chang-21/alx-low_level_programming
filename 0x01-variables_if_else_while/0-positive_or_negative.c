#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("n: %d\n", n);
	if(n > 0);
	{
	/* checks the if statement*/
	printf("n is positive");
	}
	else if(n == 0);
	{
	/*checks the else if statement*/
	printf("n is zero");
	}
	else(n < 0);
	{
	/*checks the else statement*/
	printf("n is negative");
	}
	return (0);

}
