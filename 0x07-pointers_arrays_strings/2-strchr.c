#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of char
 * @c: char
 * Return: first character of c or NULL
 */
char *_strchr(char *s, char c)
{
	int y = 0, z;

	while (s[y])
		y++;
	for (z = 0; z < y; z++)
	{
		if (c == s[z])
			s += z;
		return (s);
	}
	return ('\0');
}
