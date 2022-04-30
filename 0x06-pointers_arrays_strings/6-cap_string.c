#include "main.h"
#include <string.h>
/**
  *cap_string- a function that capitalizes a string
  *@n: A string
  *
  *Return: Character
  */
char *cap_string(char *n)
{
	int l = strlen(n);
	int x = 0;

	if (n[x] >= 'a' && n[x] <= 'z')
		n[x] -= 32;
	while (x < l)
	{
		if (n[x] == ' ' ||
		    n[x] == '\t' ||
		    n[x] == '\n' ||
		    n[x] == ',' ||
		    n[x] == ';' ||
		    n[x] == '.' ||
		    n[x] == '!' ||
		    n[x] == '(' ||
		    n[x] == ')' ||
		    n[x] == '{' ||
		    n[x] == '}')
		{
			x++;
			if (n[x] >= 'a' && n[x] <= 'z')
			{
				n[x] -= 32;
			}
		}
		else
			x++;
	}
	return (n);
}
