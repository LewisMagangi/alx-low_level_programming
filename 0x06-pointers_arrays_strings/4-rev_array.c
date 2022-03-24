#include "main.h"

/**
 * reverse_array  - a function that reverses an array of integers.
 * @a: an array of intergers
 * @n: no of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
