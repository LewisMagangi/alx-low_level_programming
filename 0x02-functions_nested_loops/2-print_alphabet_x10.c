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
char a;
int b;
b = 0;
	while (b <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);
		}
	b++;
	_putchar('\n');
	}
}

