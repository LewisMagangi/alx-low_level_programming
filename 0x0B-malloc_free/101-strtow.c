#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *strtow-a function that splits a string into words.
  *@str: string input
  *
  *Return: A character input
  */
char **strtow(char *str)
{
	int i, j, letters, index, words = 0;
	char **wow;

	if (!str || !strlen(str))
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i]!=' ' && str[i+1]==' ')
			words++;
	}

	wow = malloc(sizeof(char *) * (words + 1));
	if (wow == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		printf("hj\n");
		while (str[index] == ' ')
			index++;

		letters = strlen(str + index);

		wow[i] = malloc(sizeof(char) * (letters + 1));

		if (wow[i] == NULL)
		{
			for (; i >= 0; i--)
				free(wow[i]);

			free(wow);
			return (NULL);
		}

		for (j = 0; j < letters; j++)
		{
			printf("J\n");
			wow[i][j] = str[index++];
		}

		wow[i][j] = '\0';
	}
	wow[i] = NULL;

	return (wow);
}
