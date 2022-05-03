#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  *new_dog-a function that creates a new dog.
  *@name: The dog's name
  *@age: The dog's age
  *@owner: The dog's owner
  *
  *Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newcopydog;

	if (name == NULL || owner == NULL)
		return (NULL);
	newcopydog = malloc(sizeof(dog_t));
	if (newcopydog == NULL)
		return (NULL);
	newcopydog->name = strdup(name);
	if (newcopydog->name == NULL)
	{
		free(newcopydog->name);
		free(newcopydog);
		return (NULL);
	}
	newcopydog->owner = strdup(owner);
	if (newcopydog->owner == NULL)
	{
		free(newcopydog->name);
		free(newcopydog->owner);
		free(newcopydog);
		return (NULL);
	}
	newcopydog->age = age;
	return (newcopydog);
}
