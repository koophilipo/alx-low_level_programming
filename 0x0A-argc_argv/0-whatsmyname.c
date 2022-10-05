#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: holds the length of the argument array
 * @argv: string array containing arguments passed
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s", argv[0]);
	}

	return (0);
}
