#include <stdio.h>
int before_main(void) __attribute__((constructor));
/**
 * before_main - check the code
 *
 * Return: Always 0.
 */
int before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
