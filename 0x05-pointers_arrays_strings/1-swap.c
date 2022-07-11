#include "main.h"

/**
 * swap_int - function to swap integers
 * @a: integer one
 * @b: integer two
 * Return: no return
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
