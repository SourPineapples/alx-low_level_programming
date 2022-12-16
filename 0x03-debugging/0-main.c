#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative -  debugging tests function that prints integere
 * @i: int in question
 * Return: 0
 */

void positive_or_negative(int i)
{
	int n;

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
