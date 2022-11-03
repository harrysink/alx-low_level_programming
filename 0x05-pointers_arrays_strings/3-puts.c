#include "main.h"

/**
 * _puts - this function prints a string, followed by a
 * new line, to stdout
 * @str: pointer to string to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

