#include <stdio.h>
/**
 * main - main function of the programm
 *
 * Return: end of the program to be always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
		putchar(n);
	putchar(10);
	return (0);
}
