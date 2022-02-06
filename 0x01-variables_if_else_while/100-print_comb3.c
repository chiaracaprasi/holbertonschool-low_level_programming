#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, n2;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			if (n2 > n)
			{
				putchar(n);
				putchar(n2);
				if (n != '8' || n2 != '9')
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
