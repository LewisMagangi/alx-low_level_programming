#include "main.h"
/**
 * string_toupper - function that changes all lowercase letter
 * of a string to uppercase
 * @n: character input
 * Return: n.
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z'
			n[i] = n[i] - 32;
	}
	return (n);
}
