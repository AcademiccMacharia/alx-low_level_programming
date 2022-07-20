#include "main.h"

/**
 * _puts_recursion -prints a string
 * @s: string to be printed
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
	_putchar('\n');
}
