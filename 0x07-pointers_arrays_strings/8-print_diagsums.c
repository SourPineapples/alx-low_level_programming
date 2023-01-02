#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -prints the sum of the two diagonals of asquare matrix
 * @a: array matrix
 * @size: size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int b, sim1 = 0, sum2 = 0;

	for (b = 0; b < size b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %dn", sum1, sum2);
}
