#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/* more codes */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
