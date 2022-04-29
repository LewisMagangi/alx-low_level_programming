#include "main.h"
/**
  *_strcat-a function that concatenates two strings.
  *@dest: A character input
  *@src: A character input
  *
  *Return: Character
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (*(src + i) != '\0')
	{
		dest[len + i + 1] = src[i];
		i++;
	}
	dest[len + i + 1] = '\0';
	return (dest);
}

