#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings, followed by new line
 * @separator: string to be printed between the strings
 * @n: numbers of strings to print
 * Return: void;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *toprint;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		toprint = va_arg(ap, char*);
		if (toprint != NULL)
			printf("%s", toprint);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
