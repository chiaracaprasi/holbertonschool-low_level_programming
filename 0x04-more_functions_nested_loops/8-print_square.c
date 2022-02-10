#include "main.h"
/**
 * print_square- prints a square in the terminal
 * using _ followed by new line
 * @size: the number of times the character _ should be printed
 * Return: none
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
