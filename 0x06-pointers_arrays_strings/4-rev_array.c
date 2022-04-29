#include "main.h"
#include <string.h>
/**
  *reverse_array-a function that reverses an array of integers
  *@a: An array of intergers
  *@n: No of elements
  *
  *Return:
  */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}

