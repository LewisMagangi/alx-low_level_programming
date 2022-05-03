#include "main.h"
#include <string.h>
/**
  *_print_rev_recursion-a function that prints a string in reverse.
  *@s: string input
  *
  *Return:
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(++s);
	else
		return;
	s--;
	_putchar(*s);
}
