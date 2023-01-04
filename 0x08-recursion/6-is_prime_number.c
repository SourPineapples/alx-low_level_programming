#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - returns the input integer
 *@n: number
 * Return: value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for prime number
 * @n: values
 * @i: int
 * Return: 0 or 1
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prine(n, i + 1));
}
