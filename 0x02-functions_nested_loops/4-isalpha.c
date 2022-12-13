#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character checked
 * Return: 1 if its alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
