#include "function_pointers.h"

/**
 * print_name - prints a string passed in based on function pointer
 *
 * @name: string pointer
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	void (*func)(char *);

	if (f != NULL && name != NULL)
	{
		func = f;
		func(name);

	}

}
