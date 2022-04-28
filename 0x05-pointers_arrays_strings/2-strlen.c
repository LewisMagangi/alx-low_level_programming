#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: char input
* Return: length of the input string
*/
int _strlen(char *s)
{
	int len  = 1;
	char head = s[0];

	while(head != '/0')
		head = s[len++];
	
	return (len - 1);
}
