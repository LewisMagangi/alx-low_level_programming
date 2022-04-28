#include "main.h"
/**
  *rev_string - A function that prints a string, in reverse, followed by a new line.
  *@s - A character input
  *
  *Return: void
  */
void rev_string(char *s)
{
	int x, len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (x < len)
	{
		s[len - 1] = s[x];
		x++;
		len--;
	}
}

