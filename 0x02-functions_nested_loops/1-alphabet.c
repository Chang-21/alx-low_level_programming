#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		++a;
	}
	putchar(10);
}
