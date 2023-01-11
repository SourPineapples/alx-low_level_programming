#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL or new string
 */
char *_strdup(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies arrays
 * @src: array
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array for string
 * @str: string
 * Return: pointer
 */

char *_strdup(chat *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	dst = (char *) malloc(size *sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
