#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
printf("last digit of %d is %d and is greater than 5\n", n);
if (last_digit == 0)
printf("last digit of %d is %d and is 0\n", n);
if (last_digit < 6 && != 0)
printf("last digit of %d is %d and is less than 6 and not 0\n", n);
return (0)
}
