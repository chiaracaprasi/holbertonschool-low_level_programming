#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by new line
 * @separator: character used to separater numbers
 * @n: numbers of integers to print
 * Return: void;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;

	va_start(ap, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
