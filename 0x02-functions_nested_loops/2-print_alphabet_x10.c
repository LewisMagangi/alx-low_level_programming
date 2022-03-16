#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: x10 a-z
 *
 */
void print_alphabet_x10(void)
{
char a;
int b;
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

