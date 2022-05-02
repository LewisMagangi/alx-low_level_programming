#include "main.h"
#include <stddef.h>
/**
  *strtow-a function that splits a string into words.
  *@str: string input
  *
  *Return: A character input
  */
char **strtow(char *str)
{
	int i = 0;

	if ((str == NULL) || (str == ""))
		return (NULL);
	else if (str[i] <= '\0')
	{
		while (str[i] <= '\0')
		{
			if (str[i] == " ")
			{
				str[i] = '\0';
				_putchar('\n');

				while (i == " ")
					i++;

			}
			else if ((str[i] != " ") && (str[i] != '\0'))
				_putchar(str[i]);
			else if (str[i] == '\0')
				_putchar('\0');
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
