#include "main.h"
#include <stdio.h>

/**
  *rot13-a function that encodes a string using rot13.
  *@n: A character input
  *
  *Return: A character
  */
char *rot13(char *n)
{
	int i = 0;
	char input[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j = 0;

	while (n[i])
	{
		while (j < 52)
		{
			if (n[i] == input[j])
			{
				n[i] = output[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (n);
}
