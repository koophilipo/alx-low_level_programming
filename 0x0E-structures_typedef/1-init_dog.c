#include "dog.h"

/**
 * init_dog - initializes elements of struct dog
 *
 * @d: struct pointer
 * @name: string
 * @age: float integer
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p;

	p = d;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
