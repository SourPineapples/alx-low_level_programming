#include <string.h>
#include "main.h"
/**
 * puts_half - function that prints swcond half of a string
 * @str: function in use
 */
void puts_half(char *str)
{
	int a, b;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (i = b; i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}
