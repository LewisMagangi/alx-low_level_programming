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

	while (n[i])
	{
		if (((n[i] >= 'a') && (n[i] <= 'z')) || ((n[i] >= 'A') && (n[i] <= 'Z')))
		{
			n[i] += 13;
			i++;
		}
	}
	return (n);
}	
