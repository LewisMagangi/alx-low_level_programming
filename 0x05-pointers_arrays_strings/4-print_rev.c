#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: A character input
 */
void print_rev(char *s)
{
	int i, j, x = 0;

	char v[];

	char c;

	while (*(s + x) != '\0')
	{
		x++;
	}
	j = x - 1;

	while (i < j)
	{
		v[i] = *(s + j);
		i++;
		j--;
		c = v[i];
		_putchar (c);
	}
}
