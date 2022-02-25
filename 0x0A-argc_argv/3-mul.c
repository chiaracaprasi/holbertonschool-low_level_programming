#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and print the result
 * @argc: count of arguments passed into function
 * @argv: array of arguments
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int product;
	product = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", product);

	return (0);
}
