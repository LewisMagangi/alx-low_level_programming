#include "main.h"
/**
 * puts_half - a function that prints half of s string
 * @str: a character input
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
