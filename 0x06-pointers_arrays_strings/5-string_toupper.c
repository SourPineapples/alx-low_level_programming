#include "main.h"
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: char in use
 * Return: string
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
