#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints number of  arguments passed to function
 *
 * @argc: integer variable
 * @argv: array of strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
