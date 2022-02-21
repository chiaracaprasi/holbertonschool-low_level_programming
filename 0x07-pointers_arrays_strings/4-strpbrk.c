#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string given
 * @accept: bytes to locate in string s
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strpbrk(char *s, char *accept)
{
	int count1 = 0;
	int count2;

	while (s[count1] != '\0')
	{
		count2 = 0;
		while (accept[count2] != '\0')
		{
			if (s[count1] == accept[count2])
				return (s + count1);
			count2++;
		}
		count1++;
	}
	return ('\0');
}
