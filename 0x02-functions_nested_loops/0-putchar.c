#include "main.h"

/**
 *main - function prints out characters
 *
 *Return: always 0
 */

int main(void)
{
	char func[8] = "_putchar";
	int count = 0;
	int arrlen = sizeof(func) / sizeof(*func);

	while (count < arrlen)
	{
		_putchar(func[count]);
		count++;
	}

	_putchar('\n');
	return (0);
}
