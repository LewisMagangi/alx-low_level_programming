#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: A character input
 */
void print_rev(char *s)
{
	char x;

	for (x = '\0'; x >= *(s + 0); x--)
	{
		_putchar (x);
	}
	_putchar ('\n');
}
