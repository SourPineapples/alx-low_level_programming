#include "main.h"
#include <string.h>
/**
 * print_array -  function that prints n elements of an array of integers
 * @a: int in use
 * @n: int in use
 * Return: 0
 */
void print_array(int *a, int n)
{
	int m, a, n;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
