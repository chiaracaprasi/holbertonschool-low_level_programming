#include "main.h"
/**
 * print_numbers - prints the alphabet from 0 to 9
 * followed by new line
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
