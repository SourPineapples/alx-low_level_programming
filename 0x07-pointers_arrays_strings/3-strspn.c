#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char string
 * @accept: bytes in substring
 * Return:  number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, g = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				g++;
			}
			b++;
		}
		a++;
	}

	return (g);
}
