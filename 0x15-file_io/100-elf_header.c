#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


int _strlen(const char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}



int main(int ac __attribute__((unused)), char **av)
{
	int i, c = 0;

	char *comm = "readelf -h ";
	char *pipe = " | head -11";
	char *str;

	c += _strlen(comm);
	c += _strlen(av[1]);
	c += _strlen(pipe);
	str = (char *)malloc(sizeof(char) * (c + 1));
	strcat(str, comm);
	strcat(str, av[1]);
	strcat(str, pipe);

	i = system(str);
	if (i < 0)
	{
		exit(98);
	}
	return (0);
}
