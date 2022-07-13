#include <unistd.h>

/**
 * _putchar - function to write the character c to stdout
 * @c: Character to be outputted
 * Return: Always 0 on succes
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

