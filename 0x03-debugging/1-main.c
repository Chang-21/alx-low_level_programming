#include <stdio.h>
/**
 * main - causes and infinit loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	 * while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 */
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
