#include <stdio.h>

/**
 * main - function prints all alphabets
 *
 *description: The function main prints all alpha characters
 *successively and then a newline
 *Return: always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');

	alpha = 'A';

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'Z');

	putchar('\n');
	return (0);
}
