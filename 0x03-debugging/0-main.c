#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - debugging tests function that prints integer
 * @i: int in use
 * Return: 0
 */

void positive_or_negative(int i)
{
	int n;
	int i;

	i = 0;

	srand(time(0));
	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
