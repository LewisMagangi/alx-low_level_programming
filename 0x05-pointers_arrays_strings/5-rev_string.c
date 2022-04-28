#include "main.h"
/**
  *rev_string - A function that prints a string, in reverse, followed by a new line.
  *@s - A character input
  *
  *Return: void
  */
void rev_string(char *s)
{
	int x = 0, y = 0, len = 0;
	char u[];
	while (*(s + len) != '\0')
	{
		len++;
	}
	y = len;

	while (0 < y)
	{
		u[x] = s[len - 1];
		x++;
		len--;
	}
	*s = *u;
}

