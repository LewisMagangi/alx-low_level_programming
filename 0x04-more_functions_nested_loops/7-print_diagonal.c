#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line
 * @n: a number input
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = '0'; i <= 'n'; i++)
	{
		if (n <= '0')
		{
			putchar ('\n');
		}
		else if (i == n)
		{
			break;
		}
		else
		{
			for (j = '1'; j <= i; j++)
			{
				if (j < i)
				{
					putchar (' ');
				}
				else if (j == i)
				{
					putchar ('\');
					putchar ('\n');
				}
			}
		}

	}
}
