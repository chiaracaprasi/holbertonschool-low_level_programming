#include "main.h"
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower care
 * followed by new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
