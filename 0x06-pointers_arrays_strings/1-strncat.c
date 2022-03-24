#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int n;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}

