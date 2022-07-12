#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @n: number of array
 * @a: array
 * Return: no return
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", *(a + 1));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
