#include "main.h"

/**
* _memcpy - Entry point
* @dest: input
* @src: input
* @n: input
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		dest[i] = src[i];

	return (dest);
}
