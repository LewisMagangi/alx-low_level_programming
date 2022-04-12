#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a data structure for dogs
 * @name: character *input
 * @age: float input
 * @owner: character *input
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
