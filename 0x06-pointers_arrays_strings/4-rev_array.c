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

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}

}
