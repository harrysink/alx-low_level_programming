#include "main.h"

/**
 * _strlen_recursion - this program returns the length of a string
 * @s: pointer to string whose length is to be returned
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
