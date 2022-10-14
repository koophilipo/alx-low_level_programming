#include "dog.h"

/**
 * _strlen - checks the length of a string
 *
 * @val: string
 * Return: length of string (success), 0 (fail)
 */
int _strlen(char *val)
{
	int len = 0;

	if (val != NULL && val[0] != '\0')
	{
		while (val[len] != '\0')
		{
			len++;
		}
		return (len);
	}
	return (0);
}

/**
 * _strcp - duplicate a string
 *
 * @val1: new string
 * @val2: old string
 */
void _strcp(char *val1, char *val2)
{
	int i = 0;

	if (val1 != NULL && val2 != NULL)
	{
		while (val2[i] != '\0')
		{
			val1[i] = val2[i];
			i++;
		}

		val1[i] = '\0';
	}
}

/**
 * new_dog - creates a new struct dog
 *
 * @name: string
 * @age: float integer
 * @owner: string
 * Return: new instance of dog_t (success), NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o;
	char *nowner, *nname;
	dog_t *newDog;
	dog_t nDog;

	newDog = &nDog;

	if (name == NULL || owner == NULL || age <= 0 || age = '\0' || 
			name[0] == '\0' || owner[0] == '\0')
	{
		return (NULL);
	}
	n = _strlen(name);
	o = _strlen(owner);

	nname = (char *)malloc(sizeof(char) * (n + 1));
	nowner = (char *)malloc(sizeof(char) * (o + 1));
	if (nname == NULL || nowner == NULL)
	{
		return (NULL);
	}
	_strcp(nname, name);
	_strcp(nowner, owner);

	newDog->name = nname;
	newDog->owner = nowner;
	newDog->age = age;
	return (newDog);
}
