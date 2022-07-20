#include "main.h"

/**
 * factorial - gives the factorial of an int
 * @n: integer used
 * Return: -1 for negative, 1 for 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
