#include "main.h"



/**
 * read_textfile - reads characters from a file upto an index
 * @filename: filename
 * @letters: index of chars
 * Return: n chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0;
	unsigned int c = 0;
	FILE *buff = NULL;

	buff = fopen(filename, "r");
	if(buff == NULL)
	{
		return (0);
	}
	while ((i = fgetc(buff)) != EOF && c < letters)
	{
		putchar(i);
		c++;
	}
	fclose(buff);
	return (c);
}
