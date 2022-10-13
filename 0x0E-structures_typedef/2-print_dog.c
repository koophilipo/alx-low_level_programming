#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the values of the elements of struct pointer
 *
 * @d: struct pointer 
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL && d->name[0] != '\0')
		{
			printf("Name : %s\n", d->name);
		}
		else
		{
			printf("Name : (nil)\n");
		}
		if (d->age != '\0' && d->age > 0)
		{
			printf("Age : %f\n", d->age);
		}
		else
		{
			printf("Age : (nil)\n");
		}
		if (d->owner != NULL && d->owner[0] != '\0')
		{
			printf("Owner : %s\n", d->owner);
		}
		else
		{
			printf("Owner : (nil)\n");
		}
	}
}
