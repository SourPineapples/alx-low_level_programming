#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that generates random valid passwords
 * Return: 0 for success
 */
int main(void)
{
	int password, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		password = (rand() % 128);
		sum += password;
		printf("%c", password);
	}
	printf("%c", 2772 - sum);

	return (0);
}
