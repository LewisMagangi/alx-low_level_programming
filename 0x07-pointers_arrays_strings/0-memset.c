#include "main.h"
/**
  *_memset-a function that fills memory with a constant byte.
  *@s: character input
  *@b: character input
  *@n: An unsigned interger
  *
  *Return: A character
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
