#include "main.h"
/**
 * fizz_buzz - designed to help filter out programming job candidates
 */
void fizz_buzz(void)
{
	int w;

	for (w = 1; w < 100; w++)
	{
		if (w % 5 == 0)
			printf("Buzz ");
		else if (w % 3 == 0 && w % 5 == 0)
			printf("FizzBuzz ");
		else if (w % 3 == 0)
			printf("Fizz ");
		else if (w == 3 * 5)
			printf("%d ", w);
	}
	printf('\n');
}
