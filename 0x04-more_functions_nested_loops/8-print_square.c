#include "main.h"
/**
 * print_square- prints a diagonal line in the terminal
 * using _ followed by new line
 * @n: the number of times the character _ should be printed
 * Return: none
 */
void print_diagonal(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
