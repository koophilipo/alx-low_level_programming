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
int main(int argc, char *argv[])
{
	int i;
	int j;
	int total = 0;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
	
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0 && argv[i][j] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	total += atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);
	return (0);
}

