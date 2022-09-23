#include "main.h"

/**
 * reverse_array - reverses the values in an array
 *
 * @a: pointer
 * @n: integer
 * Return: pointer to reversed array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int *end = a;
	int *begin = a;

	for (; i < n - 1; i++)
	{
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		a[n-1] = *begin;
		a[i] = temp;
		n--;
		begin++;
		end--;
	}

}
