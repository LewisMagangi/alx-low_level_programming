#include "main.h"
/**
 * print_alphabet_x10 - a function that prints x10 a-z
 *
 * Return: x10 a-z
 *
 */
void print_alphabet_x10(void)
{
	int a, b;

	b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		b++;
	_putchar('\n');
	}
}

