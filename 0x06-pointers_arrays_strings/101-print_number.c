#include "main.h"

/**
* print_number - Prints an integer.
* @n: The integer to be printed.
*/

void print_number(int n)
{
	int tmp, factor = 1, num = n;

	if (num == 0)
		_putchar('0');

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	tmp = num;

	while (tmp)
	{
		tmp = tmp / 10;
		factor = factor * 10;
	}

	while (factor > 1)
	{
		factor = factor / 10;
		_putchar((num / factor) + '0');
		num = num % factor;
	}
}
