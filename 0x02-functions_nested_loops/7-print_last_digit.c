#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int in question
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;
	_putchar(l + '0');

	return (l);
}
