#include "main.h"

/**
* _strcmp - a function that compares two strings
* @s1: input one
* @s2: input two
*
* Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
