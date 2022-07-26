#include "main.h"

/**
 * *create_array - Creates an array of chars, initialized with a specific char
 * @size: size of the array
 * @c: storage char
 *
 * Return: NULL if it fails and the pointer to the array if success
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
		return (NULL);

	d = malloc(sizeof(c) * size);

	if (d == NULL)
		return (NULL);

	for (i=0; i < size; i++)
		d[i] = c;

	return (d);
}
