#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: an interger value
 */
void print_square(int size)
{
	int i;

	for (i = '0'; i <= size; i++)
	{
		if (size <= '0')
		{
			putchar ('\n');
		}
		else if (size == i)
		{
			break;
		}
		else
		{
			for (j = '1'; j <= size; j++)
			{
				if (j == size)
				{
					putchar ('#');
					putchar ('\n');
				}
				else
				{
					putchar ('#');
				}


