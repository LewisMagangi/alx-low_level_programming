#include "main.h"
#include <stddef.h>
/**
  *_strchr-a function that locates a character in a string.
  *@s: string input
  *@c: character to be located
  *
  *Return: A character output
  */
char *_strchr(char *s, char c)
{
	int l = 0;

	while (s[l])
	{
		if (s[l] == c)
			return (*(s + l));
		else 
			return (NULL);
		l++;
	}
}
