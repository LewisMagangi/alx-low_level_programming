#include "main.h"
/**
 *rev_string -A function that reverses a string.
 *@s: A character input
 *
 *Return: void
 */
void rev_string(char *s)
{
	int x = 0, len = 0;
	char temp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (x < len)
	{
		len--;
		temp = s[x];
		s[x] = s[len];
		s[len] = temp;
		x++;
	}
}

