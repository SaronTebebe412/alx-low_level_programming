#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - main
 *
 * @symbol: var 1
 * @print_func: var 2
*/
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

#endif
