#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: A character input
 */
void rev_string(char *s)
{
	int j = 0;
	int n, i;
	char x = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (n = 0; n < j; n++)
	{
		j--;
		x = s[n];
		s[n] = s[j];
		s[j] = x;
	}
}
