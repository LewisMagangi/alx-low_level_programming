#include "main.h"
/**
 * puts_half - a function that prints half of s string
 * @str: a character input
 */
void puts_half(char *str)
{
	int i, x, n;

	if (n % 2 == 0)
		n = _strlen(str) / 2;
	else
		n = ((_strlen(str) - 1) / 2);

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
	}
	_putchar ('\n');
}
