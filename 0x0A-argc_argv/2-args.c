#include <stdio.h>

/**
 * main - prints all arguments sent to function
 *
 * @argc: integer varaible
 * @argv: arrray of string
 * Return: Always 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		return (1);
	}
	return (0);
}
