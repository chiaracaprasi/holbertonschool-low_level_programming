#include "main.h"
/**
 * print_line- prints a straight line in the terminal
 * using _ followed by new line
 * @n: the number of times the character _ should be printed
 * Return: none
 */
void print_line(int n)
{
	int times;

	if (n <= 0)
	  _putchar('\n');

	else
	  {
	    for (times = '0'; times <= n; times++)
	      {
		_putchar(n);
	      }
	  }	
	_putchar('\n');
}
