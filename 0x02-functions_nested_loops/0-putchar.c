#include <unistd.h>

/**
 * main - Prints _putchar as a message
 *
 * Return - On Success 1
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114}
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
