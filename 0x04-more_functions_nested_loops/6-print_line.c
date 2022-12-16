#include "main.h"
/**
 * print_line - draws a straight line in the termina
 * @n: int in use
 */
void print_line(int n)
{
	int y;

	if (n <= 0)
		_putchar('\n');
	for (y = 0; y < n; y++)
		_putchar(95);
	_putchar('\n');
}
