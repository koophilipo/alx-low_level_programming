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
	p->name = name;
	p->age = age;
	p->owner = owner;
}
