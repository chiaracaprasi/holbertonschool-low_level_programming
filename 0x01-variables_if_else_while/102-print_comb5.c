#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, n2;

	for (n = 0; n <= 99; n++)
	{
		for (n2 = 0; n2 <= 99; n2++)
		{
			if (n < n2)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');
				if (n != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
