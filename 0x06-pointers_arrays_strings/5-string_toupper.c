#include "main.h"

/**
 * string_toupper - capitalizes lower case letters
 *
 * @inpt: string pointer
 * Return: pointer to char array
 */

char *string_toupper(char *inpt)
{
	int i = 0;

	while (inpt[i])
	{
		if ((inpt[i] >= 'a') && (inpt[i] <= 'z'))
		{
			inpt[i] -=  32;
		}
		i++;
	}
	return (inpt);
}
