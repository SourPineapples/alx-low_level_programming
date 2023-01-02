#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of char
 * @c: char
 * Return: first character of c or NULL
 */
char *_strchr(char *s, char c)
{
	int y;

	while (1)
	{
		y = *s++;
		if (y == c)
		{
			return (s - 1);
		}
	
		if (y == 0)
		{
			return (NULL);
		}
	}
}
