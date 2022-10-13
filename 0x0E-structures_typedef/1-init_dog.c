#include "dog.h"
#include <stdlib.h>

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
	if (d != NULL)
	{
		struct dog *p;

		p = d;
		if (name != NULL)
		{
			p->name = name;
		}
		if (age != '\0')
		{
			p->age = age;
		}
		if (owner != NULL)
		{
			p->owner = owner;
		}
	}
}
