#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower care 10 times
 * followed by new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int t;

	for (t = 0; t <= 9; t++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
