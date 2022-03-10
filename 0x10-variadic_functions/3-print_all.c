#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void;
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int num, c;
	double f;
	char *str, *sep;
	sep = "";
	va_start(ap, format);

	if(format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				c = va_arg(ap, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				num = va_arg(ap, int);
				printf("%s%d", sep, num);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
		putchar('\n');
		va_end(ap);
	}

}
