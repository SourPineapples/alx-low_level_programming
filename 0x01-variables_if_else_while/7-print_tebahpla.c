#include <stdio.h>

/**
 * main - printing lowercase alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char sm;

	for (sm = 'z'; sm >= 'a'; sm--)
		putchar(sm);

	putchar('\n');

	return (0);
}
