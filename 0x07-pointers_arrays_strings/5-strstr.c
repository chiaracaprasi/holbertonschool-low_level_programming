#include "main.h"
/**
 * match - check the code
 * @first_matching_char: substring to locate in string s
 * @needle: substring to locate in string s
 * Return: Always 0.
 */
int match(char *first_matching_char, char *needle)
{
	while (*needle != '\0')
	{
		if (*first_matching_char != *needle)
		{
			return (0);
		}
		needle++;
		first_matching_char++;
	}
	return (1);
}

/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: string given to be searched
 * @needle: substring to locate in string s
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0;

	while (haystack[count] != '\0')
	{
		if (haystack[count] == needle[0])
		{
			if (match(&haystack[count], needle) == 1)
			{
				return (&haystack[count]);
			}
		}
		count++;
	}
	if (*needle == '\0')
		return (haystack);

	return (0);
}
