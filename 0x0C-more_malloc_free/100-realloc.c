#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates old to new, set conditions from problem
 * returning dest w/ size of malloc new_size, set src as ptr
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		dest = malloc(new_size);

		if (dest == NULL)
			return (NULL);

		return (dest);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		dest[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (dest);
}
