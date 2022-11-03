#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_check - exits program if check is true
 * @i: value to perform check with
 * @j: File descriptor number
 */
void close_check(int i, int j)
{
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", j);
		exit(100);
	}
}


/**
 * error_check1 - exits program if checks are true
 * @i: value to perform check one
 * @str: filename passed
 */
void error_check1(int i, const char *str)
{
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
}

/**
 * error_check2 - exits program if checks are true
 * @t: value to perform check on
 * @str: filename passed
 */
void error_check2(int t, const char *str)
{
	if (t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", str);
		exit(99);
	}
}


/**
 * cp - copies the content of a file to another file
 * @file1: copy from
 * @file2: copy to
 */
void cp(const char *file1, const char *file2)
{
	int i, j, z, e, t, p;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int max_read = sizeof(char) * 1024;
	int byte_read = 0;
	char *arr;
	int c = sizeof(char) * 1025;

	arr = (char *)malloc(sizeof(char) * 1025);
	i = open(file1, O_RDONLY);
	error_check1(i, file1);
	j = open(file2, O_RDWR | O_CREAT | O_TRUNC, mode);
	error_check2(j, file2);

	for (z = 0; c >= max_read; z++)
	{
		c = read(i, arr, max_read);
		error_check1(c, file1);
		byte_read = c;
		t = write(j, arr, byte_read);
		error_check2(t, file2);
	}
	e = close(i);
	close_check(e, i);
	p = close(j);
	close_check(p, j);
	free(arr);
}

/**
 * main - duplicates a file
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", "file_from", "file_to");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
