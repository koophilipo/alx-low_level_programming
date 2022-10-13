#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - contains elements of a dog
 *
 * Description: variables group of a dog
 *
 * @name: string
 * @age: decimal integer
 * @owner: string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
