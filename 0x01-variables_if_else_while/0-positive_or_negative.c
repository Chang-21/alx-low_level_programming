#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program will assign a random number to the variable n
 *
 * description: get a random number and print the number as either negative positive or zero
 * return: 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%i is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
	printf("%i is zero\n", n);
	return (0);
}	
