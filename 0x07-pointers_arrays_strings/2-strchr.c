#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be identified
 * @s: string to be searched through
 * Return: return c on success
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			return ('\0');
		}
}
