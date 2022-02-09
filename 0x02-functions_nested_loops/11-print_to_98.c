#include "main.h"
#include <stdio.h>

/**
 *print_to_98- prints all nummbers from n to 98
 * followed by a space
 *@n: given number
 * Return: void;
 */
void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (m = n; m < 98; m++)
			printf("%d, ", m);
	}
	else if (n > 98)
	{
		for (m = n; m > 98; m--)
		{
			printf("%d, ", m);
		}
	}
	printf("98\n");
}
