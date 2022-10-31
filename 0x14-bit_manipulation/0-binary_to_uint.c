#include "main.h"

/**
 * _pow - calculates the power of a number
 * @z: base number
 * @p: power of number
 * Return: the result of operation
 */
int _pow(unsigned int z, unsigned int p)
{
	int i = 0;
	int b = z;
	int comp = p;

	if (p == 0)
	{
		return (1);
	}
	else if (p == 1)
	{
		return (b);
	}
	while (p > 1)
	{
		if (p == comp)
		{
			i = b * b;
		}
		else
		{
			i *= b;
		}
		--p;
	}
	return (i);
}


/**
 * _strlen - calculates the length of an array
 * @str: string
 * Return: length of string
 */
int _strlen(const char *str)
{
	int i = 0;
	const char *s;
	int len = 0;

	if (str != NULL)
	{
		s = str;
		while (s[i] != '\0')
		{
			len++;
			i++;
		}
	}
	return (len);
}

/**
 * _strdup - duplicates a string
 * @d: string to be dup
 * Return: pointer
 */
char *_strdup(const char *d)
{
	int i = 0;
	char *new;
	int len = _strlen(d);

	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
	{
		return (0);
	}
	while (d[i] != '\0')
	{
		new[i] = d[i];
		i++;
	}
	new[i] = d[i];
	return (new);
}


/**
 * convert_bin_decimal - converts a binary number to integer
 * @str: string
 * Return: integer value
 */
int convert_bin_decimal(char *str)
{
	int base;
	int i = 0;
	int len = _strlen(str);

	base = 2;
	while (len > 0)
	{
		if (*str == '1')
		{
			i += _pow(base, len - 1);
		}
		str++;
		len--;
	}
	if (*str == '1')
	{
		i += 1;
	}
	return (i);
}


/**
 * binary_to_uint - converts an string binary to decimal
 * @d: binary number
 * Return: value in decimal
 */
int binary_to_uint(const char *d)
{
	int i, conv, len;
	char *new, *temp;

	if (d == NULL)
	{
		return (0);
	}

	i = 0;
	len = _strlen(d);
	new = _strdup(d);
	temp = new;
	while (*new != '1' && *new != '\0')
	{
		new++;
	}
	if (*new == '\0' || len > 31)
	{
		return (0);
	}
	conv = convert_bin_decimal(new);
	free(temp);
	return (conv);
}
