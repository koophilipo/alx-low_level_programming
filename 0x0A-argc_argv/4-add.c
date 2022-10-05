#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds integer values passed to fuctions and prints total
 *
 * @argc: integer variable
 * @argv: array of string holding passed arguments
 * Return: Always 0 (success), 1 on error
 */
int main(int argc,char *argv[])
{
	int i = 1;
	int j;
	int total = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while(i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		total += atoi(argv[i]);
		i++;
	}
	printf("%d\n", total);
	return (0);
}

