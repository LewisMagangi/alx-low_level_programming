#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *str_concat-a function that concatenates two strings.
  *@s1: string destination
  *@s2: string source
  *
  *Return: A concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int s1len = strlen(s1);
	int s2len = strlen(s2);
	int comlen = 0;
	int x = 0;
	int y = 0;

	comlen = s1len + s2len;
	char *s2 = malloc((sizeof(char) * comlen) + (1));

	if (s1 == NULL || s2 == NULL)
		return NULL;
	for (x = 0; x < comlen; x++)
	{
		while (x => s1len)
		{
			s2[x] = s1[x - s1len]; 
		}
	}
	return (s2);
}
