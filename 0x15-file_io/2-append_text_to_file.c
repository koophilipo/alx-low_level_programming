#include "main.h"

/**
 * append_text_to_file - writes text to the end of a file
 * @filename: name of file to open
 * @text_content: text to wite to file
 * Return: 1 (success), -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j = 0, len = 0;
	int size = sizeof(char);

	if (filename == NULL)
	{
		return (-1);
	}
	j = open(filename, O_WRONLY | O_APPEND);
	if (j < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len = write(j, &text_content[i], size);
			if (len < 0)
			{
				return (-1);
			}
		}

	}
	close(j);
	return (1);
}
