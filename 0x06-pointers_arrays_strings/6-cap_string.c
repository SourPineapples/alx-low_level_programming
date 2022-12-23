#include "main.h"
#include <string.h>
/**
 * cap_string -  capitalizes all words of a string
 * @v: char in use
 * Return: string
 */
char *cap_string(char *v)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (v[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || v[a - 1] == spc[i]) && (v[a] >= 97 && v[a] <= 122))
				v[a] = v[a] - 32;
			i++;
		}
		a++;
	}
	return (v);
}
