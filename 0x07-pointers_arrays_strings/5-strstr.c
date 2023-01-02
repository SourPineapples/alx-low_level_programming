#include "main.h"

/**
 * _strstr -locates a substring
 * @haystack: big string
 * @needle: substring
 * Return: beginning or NULL
 */
char *_strstr(char *haystack, char *needle);
{
	int a = 0, z = 0;

	while (haystack[a])
	{
		while (needle[z])
		{
			if (haystack[a + z] != needle[z])
		{
			break;
		}
		z++;
	}

	if (needle[z] == '\0')
	{
		return (haystack + a);
	}
	a++;
	}
	return ('\0');
}
