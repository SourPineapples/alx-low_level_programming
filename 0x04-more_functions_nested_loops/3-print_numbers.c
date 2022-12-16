#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * @a: int in question
 * Return: success
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar(a + '0');
	_putchar('\n');
}
