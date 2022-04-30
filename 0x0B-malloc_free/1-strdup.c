#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *_strdup-a function that returns a pointer allocated space.
  *@str: A character input parameter
  *
  *Return: A character.
  */
char *_strdup(char *str)
{
	char *dup = malloc((sizeof(char) * strlen(str)) + 1);

	if (!str || !dup)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}
