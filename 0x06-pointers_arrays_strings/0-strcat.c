#include "main.h"
#include <string.h>
/**
  *_strcat-a function that concatenates two strings.
  *@dest: A character input
  *@src: A character input
  *
  *Return: Character
  */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[len++] = src[i++];
	}
	dest[len] = '\0';
	return (dest);
}

