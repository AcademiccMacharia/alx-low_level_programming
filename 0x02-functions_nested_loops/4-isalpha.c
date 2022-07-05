#include "main.h"

/**
 * _isalpha - 1 for all alphabets 0 for non-alphabets
 * @c: Character in ASCII
 *
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

