#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * find_strlen - length of string
 * @s: string
 * Return: Length
 */
int find_strlen(char *s)
{
	int len = 0;
	if (*(s + len))
	{
