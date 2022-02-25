#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_isdigit- checks for digit
 * @c: the char to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char *c)
{
	if (*c >= '0' && *c <= '9')
		return (1);
	else
		return (0);

}

/**
 * main - add positive numbers and prints the result
 * @argc: count of arguments passed into function
 * @argv: array of arguments
 *
 * Return: 0 for success or 1 for error
 */

int main(int argc, char *argv[])
{
	int sum;
	int i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (_isdigit(argv[i]) == 1)
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
