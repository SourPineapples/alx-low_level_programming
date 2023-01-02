#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of char
 * @c: char
 * Return: a string or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] >= '\0'; a++)

	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
