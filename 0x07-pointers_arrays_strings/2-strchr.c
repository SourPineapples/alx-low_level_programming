#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of char
 * @c: char
 * Return: a string or NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}