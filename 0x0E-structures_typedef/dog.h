#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
  *struct dog- a new type struct dog
  *@name: The name of the dog
  *@owner: The dog owner's name
  *@age: The age of the dog
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif /* DOG_H */
