#include <stdio.h>
/**
 * main - this is the main function of the program
 *
 * Return: the program should always end with 0
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar(10);
	return (0);
}
