#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing all possible combos of two two digit numbers
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d_f;
	int l_d;

	int c2;
	int d_f2;
	int l_d2;

	while (c <= 98)
	{
		d_f = (c / 10 + '0');
		l_d = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			d_f2 = (c2 / 10 + '0');
			l_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(d_f);
				putchar(l_d);
				putchar(' ');
				putchar(d_f2);
				putchar(l_d2);
				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}

	putchar('\n');
	return (0);
}
