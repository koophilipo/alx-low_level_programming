#include "main.h"

/**
 * _strlen - returns the length of a string array
 *
 * @val: string pointer
 * Return: Returns length of array.
 */

int _strlen(char *val)
{
	int len = 0;

	if (val != NULL)
	{
		while (val[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}

/**
 * concat - appends string 2 to string 1
 *
 * @str1: string pointer
 * @str2: string pointer
 */

void concat(char *str1, char *str2)
{
	int u = 0;
	int o = _strlen(str1);

	while (str2[u] != '\0')
	{
		str1[o] = str2[u];
		o++;
		u++;
	}
	str1[o] = '\0';
}

/**
 * strcp - duplicates a string
 *
 * @val1: string pointer
 * @val2: string pointer
 */

void strcp(char *val1, char *val2)
{
	int chk = 0;

	while (val2[chk] != '\0')
	{
		val1[chk] = val2[chk];
		chk++;
	}
}


/**
 * str_concat - concatenates two strings into a new string
 *
 * @s1: first string passed
 * @s2: second string passed
 * Return: string pointer (success), NULL (fail)
 */

char *str_concat(char *s1, char *s2)
{
	int v1, v2;
	static char *newStr;

	v1 = _strlen(s1);
	v2 = _strlen(s2);
	newStr = (char *)malloc(sizeof(char) * (v1 + v2 + 1));
	if (newStr == NULL)
	{
		return ((char *)NULL);
	}
	if (s1)
	{
		strcp(newStr, s1);
	}
	if (s2)
	{
		concat(newStr, s2);
	}
	return (newStr);
}
