#include"main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: int
 */
void print_diagonal(int n)
{
	int z, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (z = 0; z < n; z++)
		{
			for (i = 0; i < z; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
