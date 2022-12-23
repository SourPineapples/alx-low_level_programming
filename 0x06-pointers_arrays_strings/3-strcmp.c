#include "main.h"
#include <string.h>
/**
 * _strcmp -  function that compares two strings
 * @s1: 1st char
 * @s2: 2nd char
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
