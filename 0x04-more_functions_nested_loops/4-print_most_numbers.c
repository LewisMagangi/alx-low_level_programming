#include "main.h"

/**
 * print_most_numbers - a function that prints numbers excluding 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a => 9; a++)
	{
		if (a == 2)
			a++;
		else if (a == 4)
			a++;
		else
			_putchar (a);
	}
	_putchar ('\n');
}
