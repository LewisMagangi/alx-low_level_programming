#include "main.h"

/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
	int len = 0;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	
	for (j = len / 2; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
