#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
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
 * error_check - exits program if checks are true
 * @i: value to perform check on
 * @f: file descriptor value
 * @str: filename passed
 */
void error_check(int i, int f, const char *str)
{
	if (i < 0 && f == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
	else if (i < 0 && f == 2)
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
	error_check(i, 1, file1);
	j = open(file2, O_WRONLY | O_CREAT | O_TRUNC, mode);
	error_check(j, 2, file2);

	for (z = 0; c >= max_read; z++)
	{
		c = read(i, arr, max_read);
		error_check(c, 1, file1);
		byte_read = c;
		t = write(j, arr, byte_read);
		error_check(t, 2, file2);
	}
	e = close(i);
	close_check(e, i);
	p = close(j);
	close_check(p, j);
	free(arr);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
