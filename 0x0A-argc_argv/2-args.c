#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arg count
 * @argv: arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
