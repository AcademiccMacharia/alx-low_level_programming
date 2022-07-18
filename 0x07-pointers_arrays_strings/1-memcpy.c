#include "main.h"

/**
 * _memcpy - Copies memory area
 * @src: Source
 * @dest: Destination
 * @n: number of bytes
 * Return: returns the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
