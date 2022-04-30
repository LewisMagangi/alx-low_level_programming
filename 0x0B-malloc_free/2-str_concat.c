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
	int comlen = 0;
	char *s2com;
	int s1len;
	int s2len;
	int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);
	comlen = s1len + s2len;

	s2com = malloc(sizeof(char) * comlen + (1));

	if (s2com == NULL)
		return (NULL);
	strcpy(s2com, s1);
	for (x = s1len; x <= comlen; x++)
		s2com[x] = s2[x - s1len];
	return (s2com);
}
