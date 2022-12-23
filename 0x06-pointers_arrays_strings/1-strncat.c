#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: char 1
 * @src: char 2
 * @n: int in use
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
