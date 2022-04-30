#include "main.h"
#include <stddef.h>
/**
  *_strpbrk-a function that searches a string for any of a set of bytes.
  *@s: string to be searched
  *@accept: string input
  *
  *Return: A character
  */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y = 0;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
