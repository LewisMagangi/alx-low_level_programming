#include "main.h"

/**
* _puts - a function that prints a string
* @str: string input
* Return: string
*/
void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}

