#include "main.h"
#include <string.h>
/**
 * _strncpy -  function that copies a string
 * @dest: first char
 * @src: second char
 * @n: int in use
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
