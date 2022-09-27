#include "main.h"

/**
 *swap_int - interchanges the values of two variables
 */

void swap_int(int *a, int *b)
{
	int val1, val2;

	val1 = *a;
	val2 = *b;

	*a = val2;
	*b = val1;
}
