#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @i: integer count
 * @n: number of array
 * Return: no return
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[n]);
		_putchar(',');
		_putchar(' ');
	}
}
