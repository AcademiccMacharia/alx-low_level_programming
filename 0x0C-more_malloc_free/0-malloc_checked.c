#include "main.h"

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b: number of bytes
 * Return: Returns a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
