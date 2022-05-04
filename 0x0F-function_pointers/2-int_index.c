#include "function_pointers.h"
/**
  *int_index-a function that searches for an integer.
  *@array: An array of intergers
  *@size: No of elements in the array
  *@cmp: pointer to the function to be used to compare values.
  *
  *Return: Interger
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || 0 >= size || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
