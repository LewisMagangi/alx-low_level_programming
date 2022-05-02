#include "main.h"
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
	char s2comb;
	int i = 0;
	int j = 0;

	s2comb = malloc(size of(char) * strlen(s1) + size of(char) * strlen(s2) + 1);
	while (s1[i] < '\0')
	{
		s2com[i] = s1[i];
		i++;
	}
	i++;
	while (j <= n)
	{
		s2com[i] = s2[j];
		j++;
	}
	s2com[i = 1]
	return (s2com);
}
