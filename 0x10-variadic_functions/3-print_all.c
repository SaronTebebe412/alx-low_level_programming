#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - main
 *
 * @args: var 1
 *
 * Return: nothing
*/

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - main
 *
 * @args: var 1
 *
 * Return: nothing
*/

void print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}

/**
 * print_float - main
 *
 * @args: var 1
 *
 * Return: nothing
*/

void print_float(va_list args)
{
	float n = va_arg(args, double);

	printf("%f", n);
}

/**
 * print_string -main
 *
 * @args: var 1
 * Return: nothing
*/

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - main
 *
 * @format: var 1
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
