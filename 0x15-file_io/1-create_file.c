#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: string constant
 * @text_content: string
 * Return: 1 (success), -1 (failed)
 */
int create_file(const char *filename, char *text_content)
{
	int i, len = 0, j;

	if (filename == NULL)
	{
		return (-1);
	}

	j = open(filename, O_RDWR | O_CREAT);
	if (j < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(j);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		len += write(j, &text_content[i], sizeof(char));
	}
	if (len < 1)
	{
		return (-1);
	}
	close(j);
	return (1);
}
