#include <stdio.h>
/**
 * main - main function of the programm
 *
 * Return: end the program as 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	printf("\n");
	return (0);
}
