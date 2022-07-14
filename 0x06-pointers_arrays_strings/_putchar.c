#include <unistd.h>

/**
 * _putchar - function prints a character
 * @c: character to be stdout
 * Return: returns 1 on success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
