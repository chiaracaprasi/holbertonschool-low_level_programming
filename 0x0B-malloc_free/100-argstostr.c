 #include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns value of a string
 * @s: pointer to string given as parameter
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);

}


/**
 * _strcat - concatenates two strings
 * @dest: string to copy to
 * @src: string to be copied
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 1;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments passed into program
 * @av: the array containing arguments
 * Return: addition of all arguments
 */

char *argstostr(int ac, char **av)
{
	int i, space;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	space = 0;
	while (i < ac)
	{
		space = space + _strlen(av[i]) + 1;
		i++;
	}

	result = malloc(space * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		_strcat(result, av[i]);
		_strcat(result, "\n");
		i++;
	}

	return (result);
}
