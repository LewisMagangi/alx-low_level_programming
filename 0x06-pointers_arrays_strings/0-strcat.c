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
	char s1[100] = *dest;
	char s2[] = *src;
	int length, j;

	length = 0;

	while (s1[length] != '\0')
	{
		length++;
	}
	for (j = 0; s2[j] != '\0'; j++, length++)
	{
		s1[length] = s2[j];
	}
	s1[length] = '\0';
}
