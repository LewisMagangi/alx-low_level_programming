#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *string_nconcat-a function that concatenates two strings.
  *@s1: source string
  *@s2: destination string
  *@n: maximum no of s2 bytes
  *
  *Return: A concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s2comb;
	unsigned int i = 0, j = 0, s1len, s2len, comblen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n >= s2len)
		comblen = s1len + s2len;
	else
		comblen = s1len + n;

	s2comb = malloc(sizeof(char) * comblen + 1);
	if (s2comb == NULL)
		return (NULL);
	
	comblen = 0;
	while (s1[i])
		s2comb[comblen++] = s1[i++];
	
	while(s2[j] && j < n)
		s2comb[comblen++] = s2[j++];

	s2comb[comblen] = '\0';
	
	return (s2comb);
}
