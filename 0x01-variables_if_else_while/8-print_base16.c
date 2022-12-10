#include <stdio.h>

/**
 * main - printing all base 16 numbers in lowercase
 * Return: Always 0
 */
int main(void)
{
	int bsix;
	char l;

	for (bsix = 0; bsix < 10; bsix++)
		putchar((bsix % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
