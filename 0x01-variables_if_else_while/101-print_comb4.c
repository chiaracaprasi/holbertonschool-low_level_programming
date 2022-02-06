#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, n2, n3;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				if (n3 > n2 && n2 > n)
				{
					putchar(n);
					putchar(n2);
					putchar(n3);
					if (n != '7' || n2 != '8' || n3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
