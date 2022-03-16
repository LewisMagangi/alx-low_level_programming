#include "main.h"
void print_alphabet_x10(void);
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
int a;
int b;

	while (b <=10)
	{
	b = 0;
		for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);
		}
	b++;
	_putchar('\n');
	}
}

