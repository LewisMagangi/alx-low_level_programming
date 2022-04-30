#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **pptr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	pptr = malloc(sizeof(int *) * height);

	if (pptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(pptr + i) = malloc(sizeof(int) * width);

		if (*(pptr + i) == NULL)
		{
			for (; i >= 0; i--)
				free(*(pptr + i));

			free(pptr);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				*(*(pptr + i) + j) = 0;
		}
	}

	return (pptr);
}
