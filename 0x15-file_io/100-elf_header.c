#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define TEMP "._temp_.tmp"

/**
 * main - read elf header
 * @ac: number of arguments
 * @av: pointer to arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i, j, buff_len = 30;
	char *str;
	char *cmdread = "readelf -h ";
	char *pipe = " > ._temp_.tmp";
	char *file = av[1];
	FILE *fd = NULL;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: readelf --help\n");
		exit(97);
	}
	if (av[1][0] == '\0')
	{
		dprintf(STDERR_FILENO, "No valid file specified\n");
		exit(98);
	}
	str = (char *)malloc(sizeof(char) * 30);
	if (str == NULL)
	{
		printf("malloc failed");
		exit(104);
	}
	printf("we are at malloc\n");
	for (i = 0; i < 10; i++)
	{
		printf("assign1\n");
		str[i] = cmdread[i];
		printf("assign2");
	}
	printf("we are after cmd read");
	for (i = i; file[j] != '\0'; j++, i++)
	{
		if (i >= buff_len)
		{
			buff_len += 30;
			str = realloc(str, buff_len);
			if (str == NULL)
			{
				dprintf(STDERR_FILENO, "Realloc Failed\n");
				exit(99);
			}
		}
		str[i] = file[j];
	}
	printf("We are at read\n");
	for (j = 0; pipe[j] != '\0'; j++)
	{
		if (i >= buff_len)
		{
			buff_len += 20;
			str = realloc(str, buff_len);
			if (str == NULL)
			{
				dprintf(STDERR_FILENO, "Realloc failed\n");
				exit(100);
			}
		}
		str[i] = pipe[j];
	}
	str[i] = '\0';
	j = system(str);
	if (j < 0)
	{
		dprintf(STDERR_FILENO, "Command Failed\n");
		exit(101);
	}
	fd = fopen(TEMP, "r");
	if (fd == NULL)
	{
		dprintf(STDERR_FILENO, "File open failed\n");
		exit (102);
	}
	j = 0;
	while (j < 11)
	{
		char ch = fgetc(fd);
		printf("%c", ch);
		if (ch == '\n')
		{
			j++;
		}
	}
	printf("we are at command\n");
	system("rm ._temp_.tmp");
	free(str);

	return (0);
}
