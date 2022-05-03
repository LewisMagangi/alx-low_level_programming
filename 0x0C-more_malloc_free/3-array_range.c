#include "main.h"
#include <stdlib.h>
/**
  *array_range-a function that creates an array of integers.
  *@min: first member of the array
  *@max: last member of the array
  *
  *Return: an array of integers.
  */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (array == NULL)
		return (NULL);
	while (min <= max)
		array[i++] = min++;
	return (array);
}
