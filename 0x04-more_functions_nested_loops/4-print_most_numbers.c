#include "main.h"

/**
 * print_most_numbers - a function that prints numbers
 *
 * Return: 0-9, excluding 2 and 4,followed by a newline
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		else
			_putchar (a);
	}
	_putchar ('\n');
}
