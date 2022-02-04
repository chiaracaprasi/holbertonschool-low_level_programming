#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'z'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
