#include "main.h"

/**
 *puts2 - function that prints every other character of a string
 *@str: String to print character
 *Return: no return.
 */
void puts2(char *str)
{
	int ind = 0;

	while (ind >= 0)
	{
		if (str[ind] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (ind % 2 == 0)
			_putchar(str[ind]);
		ind++;
	}
}
