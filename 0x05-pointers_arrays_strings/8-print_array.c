#include "main.h"
/**
 * print_array - a functiom that prints n elements of an array of intergers
 * @a: integer input
 * @b: interger input
 */
void print_array(int *a, int n);
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		i++;
		printf("%d, ", a[i]);
	}
}
