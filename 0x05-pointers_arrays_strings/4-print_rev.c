#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: A character input
 */
void print_rev(char *s)
{
	int i, j, x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (j = x - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
