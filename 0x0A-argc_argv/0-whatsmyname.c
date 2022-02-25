#include "main.h"
#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: count of arguments passed into function
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
