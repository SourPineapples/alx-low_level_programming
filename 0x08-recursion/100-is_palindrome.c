#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * check_palindrome - checks for palindrome
 * @s: string
 * @len: length
 * @i: int
 * Return: 1 or 0
 */
int check_palindrome(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}
	if (*s == *(s + len))
	{
	return (check_palindrome(s + 1, len - 2));
	}
	return (0);
}


/**
 * is_palindrome - shows palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len - 1));
}
