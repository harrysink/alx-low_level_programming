#include "main.h"

/**
 * _puts_recursion - this program prints a string forllowed by a new line
 * @s: pointer to string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
