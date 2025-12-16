#include "main.h"

/**
 * print_number - prints a number with proper spacing
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to print the times table for
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;
			if (col == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(result);
			}
		}
		_putchar('\n');
	}
}
