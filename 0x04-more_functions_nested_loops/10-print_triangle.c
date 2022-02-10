#include "main.h"
/**
 * print_triangle- prints a diagonal line in the terminal
 * using _ followed by new line
 * @size: the number of times the character _ should be printed
 * Return: none
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#')
			}

			_putchar('\n');
		}
	}
}
