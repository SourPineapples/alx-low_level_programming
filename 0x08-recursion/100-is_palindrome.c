#include "main.h"

/**
 * find_strlen - length of string
 * @s: string
 * Return: Length
 */
int find_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + find_strlen(s + 1));
}

/**
 * check_palindrome - checks for palindrome
 * @s: string
 * @len: length
 * @i: int
 * Return: 1 or 0
 */
char check_palindrome(char *s, int len, int i)
{
	if (len > 0)
	{
		if (s[i] == s[len])
		{
			return (check_palindrome(i + 1, len - 1, s));
		}
		else if (s[i] != s[len])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
 * is_palindrome - shows palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (check_palindrome(0, find_strlen(s) - 1, s));
}
