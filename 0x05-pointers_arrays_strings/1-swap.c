#include "main.h"

/**
 * swap_int - A function that swaps values of 2 intergers
 * @a: interger input
 * @b: 2nd interger input
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;

	*a = b;
	*b = a;
}
