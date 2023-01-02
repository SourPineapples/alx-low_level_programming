#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string of char
 * @accept: string
 * Return:  to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, c;

	while (accept[c])
	{
		if (s[a] == accept[c])
		{
			s += a;
			return (s);
		}

		c++;
	}
	a++;
}
