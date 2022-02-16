#include "main.h"
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
 * _strncpy - concatenates two strings
 * @dest: parameter char given
 * @src: parameter char given
 * @n: number given as parameter
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
