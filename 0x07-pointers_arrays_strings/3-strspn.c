#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char string
 * @accept: bytes in substring
 * Return:  number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(*s, *accept);

	_putchar("Length of prefix substring", len);

	return (0);
}
