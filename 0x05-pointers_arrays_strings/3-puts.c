#include "main.h"
/**
 * _puts - a function that prints a string followed by a newline.
 * @str: a character input
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		 putchar (c);
		 i++;
	}
	putchar ('\n');
}

