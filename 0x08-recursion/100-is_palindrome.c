#include "main.h"
#include <stdio.h>

/**
 * palindrome_found - recursive check for palindrome
 * @s: string given to check
 * @i: incrementing number
 * @len: length of string
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int palindrome_found(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
		return (1);
	else
		return (palindrome_found(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string given
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}

/**
 * is_palindrome - checks if given string is a palindrome
 * @s: given string
 *
 * Return: 1 if string is palindrome, otherwise return 0.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (palindrome_found(s, 0, _strlen_recursion(s)));
}
