#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number used
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(45);
	}
	else
	{
		return (-1);
		_putchar(48);
	}
	_putchar('\n');
}
