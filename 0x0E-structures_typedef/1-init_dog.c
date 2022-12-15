#include "dog.h"

/**
 * init_dog - this function initializes a variable type of struct dog
 * @d: pointer to struct dog for initialization
 * @name: name for initialization
 * @age: age for initialization
 * @owner: owner for initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
