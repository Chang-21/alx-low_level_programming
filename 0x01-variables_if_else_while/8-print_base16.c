#include <stdio.h>
/**
 * main - this is the main function of the programm
 *
 * Return: the end program should always be 0
 */
int main(void)
{
	int a = '0';
	int b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
