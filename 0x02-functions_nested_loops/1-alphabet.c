#include "main.h"

/**
 * print alphabet - entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char lca = 'a';

	while (lca <= 'z');

	{
		_putchar(lca);
		lca++;
	}

	putchar('\n');
}
