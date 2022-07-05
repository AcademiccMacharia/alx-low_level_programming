#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @i: Interger value
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
