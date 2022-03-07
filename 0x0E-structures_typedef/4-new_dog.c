#include <stdio.h>
#include "dog.h"
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
 * _strcpy - print a string followed by new line
 * @dest: pointer to array given as parameter
 * @src: number of elements of the array to be printed
 * Return: char* the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;

		dest[count] = '\0';
	}
	return (dest);
}

/**
 * _strdup - returns a pointer to newly allocated memory
 * @str: string given
 *
 * Return: Null if size 0, otherwise pointer to array
 */
char *_strdup(char *str)
{
	char *result;

	if (str == NULL)
	{
		return (NULL);
	}

	result = malloc((_strlen(str) + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);	}
	_strcpy(result, str);
	return (result);
}

/**
 *new_dog - creates a new dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: null if function fails otherwise struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_t = malloc(sizeof(dog_t));

	if (new_dog_t == NULL)
		return (NULL);

	new_dog_t->name = _strdup(name);

	new_dog_t->age = age;

	if (new_dog_t->name == NULL)
	{
		free(new_dog_t->name);
		free(new_dog_t);
		return (NULL);
	}

	new_dog_t->owner = _strdup(owner);
	if (new_dog_t->owner == NULL)
	{
		free(new_dog_t->owner);
		free(new_dog_t);
		return (NULL);
	}

	return (new_dog_t);
}
