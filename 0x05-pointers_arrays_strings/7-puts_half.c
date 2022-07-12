#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: String to be printed
 * Return: No return
 *
 */

void puts_half(char *str)
{
	int ind = 0, i;

	while (ind >= 0)
	{
		if (str[ind] == '\0')
			break;
		ind++;
	}

	if (ind % 2 == 1)
	{
		i = ind / 2;
	}
	else
	{
		i = (ind - 1) / 2;
	}

	for (i++; i < ind; i++)
		_putchar(str[ind]);
	_putchar('\n');
}
