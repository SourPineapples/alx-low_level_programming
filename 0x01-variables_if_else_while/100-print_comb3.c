#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing all possible different combos of two digits
 * Return: 0
 */
int main(void)
{
	int m;
	int n = 0;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			if (n != m && n < m)
			{
				putchar('0' + n);
				putchar('0' + m);

				if (m + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			m++;
		}

		n++;
	}

	putchar('\n');

	return (0);
}
