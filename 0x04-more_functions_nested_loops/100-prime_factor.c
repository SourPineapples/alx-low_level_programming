#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: void
 */
int main(void)
{
	long m, i;

	m = 612852475143;

	for (i = 2, i < m; i++)
	{
		while (m % i == 0)
			m = m / i;
	}

	printf("lu\m", m);

	return (0);
}
