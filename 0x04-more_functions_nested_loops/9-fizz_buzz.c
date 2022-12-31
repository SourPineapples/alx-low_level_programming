#include <stdio.h>
#include "main.h"
/**
 * main - designed to help filter out programming job candidates
 * Return: void
 */
int main(void)
{
	int i;
	int w = 100;

	i = 1;
	while (i <= w)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < w)
				printf("Buzz ");
			else
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
	i++;
	}
	printf("\n");
	return (0);
}
