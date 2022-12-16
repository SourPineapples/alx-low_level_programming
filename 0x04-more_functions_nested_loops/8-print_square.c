#include "main.h"
/**
 * print_square -  function that prints a square
 * @size: int
 */
void print_square(int size)
{
	int x, y;
	int size = 2

		if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

