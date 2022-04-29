#include "main.h"
#include <string.h>
/**
  *_strncpy- a function that copies a string.
  *@dest: A character to be copied to
  *@src: A character to be copied from
  *@n: The maximuum bytes input
  *
  *Return: A Character
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
