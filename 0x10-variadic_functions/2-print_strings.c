#include "variadic_functions.h"

/**
 *  * print_sep - prints string to std out
 *   * @btwn: string
 *    */
void print_sep(const char *btwn)
{
        if (btwn != NULL)
        {
                while (*btwn != '\0')
		{
			printf("%c", *btwn);
			btwn++;
		}
	}
}



/**
 * print_strings - prints string pointers to std output
 * @separator: string constant
 * @n: number of variadic arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	char *chek;

	va_list strgs, chk;

	va_start(strgs, n);
	va_start(chk, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strgs, char*);
		chek = va_arg(chk, char*);
		if (chek != NULL)
		{
			printf("%s", ptr);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (n - 1))
		{
			print_sep(separator);
		}
	}
	va_end(strgs);
	putchar('\n');
}
