#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: chang
 * Description: header file containing prototypes for all functions used in the directory 
 */
#include <stdarg.h>

/**
 * struct printer - a new struct type defining a partner.
 * @symbol: a symbole representing a data type.
 * @print: a fucntion pointer to a fucntion that printd a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
