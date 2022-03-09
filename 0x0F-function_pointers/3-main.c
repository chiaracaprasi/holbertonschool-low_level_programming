#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int arg1, arg2;
	char divide;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(98);
	}

	f = *get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	divide = *argv[2];

	if ((divide == '/' || divide == '%') && (arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(arg1, arg2));
	return (0);
}
