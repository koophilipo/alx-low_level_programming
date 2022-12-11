#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int int_len(unsigned int number)
{
	int count = 0;

	do {
		number /= 10;
		++count;
	} while (number != 0);

	return (count);
}


int main(void)
{
	int i, j, t, z, len, num, result = 0, temp = 0, half;
	int *int_str;

	for (t = 100; t < 1000; t++)
	{
		for (z = 100; z < 1000; z++)
		{
			num = t * z;
			temp = num;
			len = int_len(num);
			half = len / 2;
			int_str = (int *)calloc(len, sizeof(int));
			for (i = len - 1, j = 10; i >= 0; i--)
			{
				int_str[i] = num % j;
				num /= j;
			}
			for (i = 0, j = len - 1; i < half; i++, j--)
			{
				if (int_str[i] != int_str[j])
				{
					temp = 0;
					break;
				}
			}
			if (temp > 0)
			{
				printf("%d\n", temp);
				if (temp > result)
				{
					result = temp;
				}
			}
			free(int_str);
		}
	}
	printf("largest palindrome: %d\n", result);
	return (result);
}
