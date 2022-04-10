#include "main.h"
#include <stdio.h>
/**
 * print_array - a functiom that prints n elements of an array of intergers
 * @a: integer input
 * @b: interger input
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	putchar('\n');
}
