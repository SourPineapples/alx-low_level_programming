#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: char checked
 * Return: 1 of char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
