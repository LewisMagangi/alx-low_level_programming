#include "main.h"

/**
 * print_line - a function that prints a line
 * @n: a number input
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= '0')
		{
			putchar ('\n');
		}
		else
		{
			putchar ('_');
		}
	}
	putchar ('\n');
}
