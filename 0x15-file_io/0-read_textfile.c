#include "main.h"



/**
 * read_textfile - reads characters from a file upto an index
 * @filename: filename
 * @letters: index of chars
 * Return: n chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 1, j = 0;
	unsigned int p = 1, count = 0;
	FILE *buff = NULL;
	FILE *fptr = NULL;

	buff = fopen(filename, "r");
	fptr = fopen(filename, "r");
	if (buff == NULL || fptr == NULL)
	{
		return (0);
	}
	while ((j = fgetc(fptr)) != EOF)
	{
		count++;
	}
	fclose(fptr);
	if (letters > count)
	{
		while (p < count - 1)
		{
			i = fgetc(buff);
			putchar(i);
			p++;
		}
		return (count);
	}
	while (p < letters)
	{
		i = fgetc(buff);
		putchar(i);
		p++;
	}
	fclose(buff);
	return (letters);
}
