#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("%c: %d\n", c, _isupper(c));
	c = 'b';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
