#include <stdio.h>
/**
 * main - print single digit of base 10 from 0
 * Return: Always 0
 */
int main(void)
{
	int nmb;

	for (nmb = 0; nmb < 10; nmb++)
		putchar((nmb % 10) + '0');

	putchar('\n');

	return (0);
}
