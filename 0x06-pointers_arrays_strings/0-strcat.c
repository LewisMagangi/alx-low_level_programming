#include "main.h"
/**
 * _strcat - A function that concatenates two strings.
 * @dest: A character input
 * @src: A character input
 *
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
}
