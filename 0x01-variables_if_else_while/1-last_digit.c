#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the programm will assign a random mumber to the variable n each time its executed.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANK_MAX / 2;
	if (last_digit_of_n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	if (last_digit_of_n == 0)
	{
		printf("last digit of n is %d and is 0\n", n);
	}
	if (last_digit_of_n < 6 && != 0)
	{
		printf("last digit of n is %d and is less than 6 and not 0\n", n)
	}
	return (0);
}


